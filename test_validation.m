clearvars; clear -global;
close all; clc;

addpath('../');

%% 
saveResults            = 0;           % save the results (or not)
verbose                = 1;           % plot (or not)

verbose_scattering     = [1 1 1 0 0]; % [LOS Reflections Diffractions LDS FDS]

global Conduct EFMAX emett eta freq FSLN ISLN K lambda Lr Lt Mpath Mtrun Nblock Nbrimg NbrDSSlns Nreflx oldReflex ...
       Outputdata OutputDataDiff OutputDataFDS OutputDataLDS OutputDataLos OutputDataRef ...
       Permitt PSLN Rcoeff Reflex RF RP Scoeff vnfaces wedges;

% ----------------------------------------------------------------------- %
%% generate the test environment
test2;

% ----------------------------------------------------------------------- %
%% generate the "WedgesInput" structure
% 'x', 'y', 'z' coordinates (of points #1, #2, #3 and #4, respectively)
WedgesInput(1:2:7,:)   = Wedges_x;
WedgesInput(2:2:8,:)   = Wedges_y;
WedgesInput(9:10,:)    = Wedges_z;

WedgesInput            = isPolyCcw(WedgesInput);

% electromagnetic properties of the blocks
for i = 1:size(WedgesInput,2)
     mep               = Mat_ElectProperties(Materials(1,i));
     
     WedgesInput(11,i) = mep.DSF;     % diffuse scattering flag (0 -> no ; 1 -> yes)
     WedgesInput(12,i) = mep.PF;      % penetration flag (0 -> yes ; 1 -> no)
     WedgesInput(13,i) = mep.PEC;     % perfect electric conductor (0 -> no ; 1 -> yes)
     
     WedgesInput(14,i) = mep.Permitt; % permittivity of the block
     WedgesInput(15,i) = mep.Conduct; % conductivity of the block
     
     WedgesInput(16,i) = mep.DSM;     % diffuse scattering model (1 -> Lambertian ; 2 -> directive ; 3 -> backscattering)
     WedgesInput(17,i) = mep.SC;      % scattering coefficient
     
     WedgesInput(18,i) = mep.RF;      % repartition factor in backscattering model
     WedgesInput(19,i) = mep.WSL;     % width of the scattering lobe
     WedgesInput(20,i) = mep.WBSL;    % width of the backscattering lobe
end

% ----------------------------------------------------------------------- %
%% generate the "outwedges" structure
% status value
outwedges(1,1)         = 2;

% number of blocks
outwedges(2,1)         = size(WedgesInput,2);

% depolarization of the diffuse ray
outwedges(3,1)         = 0;

% position of the transmitter
outwedges(4:6,1)       = [Tx_x Tx_y Tx_z];

% position of the receiver
outwedges(7:9,1)       = [Rx_x Rx_y Rx_z];

% reflection order
outwedges(10,1)        = 5;

% diffuse scattering case (0 -> single order diffuse scattering ; 1 -> reflection-diffuse & diffuse-reflection)
outwedges(11,1)        = 1;

% center frequency
outwedges(12,1)        = 2.4; % in [GHz]

% Tx antenna type
outwedges(13,1)        = 2;

% parameter related to the Tx antenna type
outwedges(14,1)        = 0.04;

% Rx antenna type
outwedges(15,1)        = 2;

% parameter related to the Rx antenna type
outwedges(16,1)        = 0.04;

% parameter related to the diffraction case
outwedges(17,1)        = 4.5;

% ----------------------------------------------------------------------- %

% input file
inputData3(WedgesInput,outwedges);

% ----------------------------------------------------------------------- %
%% 
vnfaces               = NormVect(); % normal perpendicular vector of each surface

lambda                = (30/freq)*0.01; % wavelength
K                     = 2*pi/lambda; % wave number

Lt                    = lambda/2;
Lr                    = lambda/2;

Rcoeff                = sqrt(1-Scoeff.^2); % (OR): reflection reduction factor -> amount of energy subtracted 
                                           %       by scattering from the specular reflection
eta                   = complex(Permitt,-60*Conduct*lambda);

aid                   = [1 1].';

Reflex                = 0;
EFMAX                 = 0;

% -----------------------------EffConstruct------------------------------ %
Mpath                 = zeros(Nreflx+1,Nblock*6,5);
Mpath(1,1,1)          = -1;
Mpath(1,1,3:5)        = emett;

NbrDSSlns             = zeros(Nreflx+1,1);

PSLN                  = zeros(Nreflx,1000,Nreflx,3);
FSLN                  = zeros(Nreflx,1000,Nreflx,2);
ISLN                  = zeros(Nreflx,1000,Nreflx,3);

RP                    = zeros(Nreflx+1,1000,Nreflx,3);
RF                    = zeros(Nreflx+1,1000,Nreflx,2);

oldReflex             = 0;
rvsds                 = 0; % only have reflection

% ----------------------------------------------------------------------- %
%% build up the reflection tree
fprintf('   \n');
if verbose_scattering(2)
    fprintf('   ------- \n');
    fprintf('   Build up the reflection tree... \n'); tic;
    EffConstruct_Image(Nreflx,emett,rvsds);
    elapsedTime       = toc; fprintf('   -> Reflection tree built: %3.2f s elapsed! \n',elapsedTime);
    fprintf('   ------- \n\n');
end

% ----------------------------------------------------------------------- %
%% calculate the path contributions
fprintf('   ------- \n');
if verbose_scattering(1)
    fprintf('   Calculate the line of sight component... \n'); tic;
    CalcELOS_Image_Olivier();
    elapsedTime(1)    = toc;
    fprintf('   -> Line of sight component finished in %3.2f s! \n \n',elapsedTime(1));
else
    OutputDataLos     = [];
end

if verbose_scattering(2)
    fprintf('   Calculate the reflection components... \n'); tic;
    CalcEref_Image_Olivier();
    elapsedTime(2)    = toc;
    fprintf('   -> Reflection component finished in %3.2f s! \n \n',elapsedTime(2));
else
    OutputDataRef     = [];
end

if verbose_scattering(3)
    fprintf('   Calculate the diffraction components... \n'); tic;
    CalcEDiff_Image_Olivier();
    elapsedTime(3)    = toc;
    fprintf('   -> Diffraction component finished in %3.2f s! \n \n',elapsedTime(3));
else
    OutputDataDiff    = [];
end

% ------------------------------ CalcLEds ------------------------------- %
Nord1                 = 2; % in CalcLEds, the reflection order is at most 2

Mtrun                 = zeros(Nord1+1,1e7,9);
Mtrun(1,1,2)          = -1; % initialization with the Tx

Nbrimg                = zeros(Nord1+1,1);
Nbrimg(1,1)           = 1;

if verbose_scattering(4)
    fprintf('   Calculate the diffuse scattering as last interaction... \n'); tic;
    Construct(Nord1);
    CalcLEds_Image_Olivier();
    elapsedTime(4)    = toc;
    fprintf('   -> Diffuse scattering as the last interaction finished in %3.2f s! \n \n',elapsedTime(4));
else
    OutputDataLDS     = [];
end

% ------------------------------ CalcFEds ------------------------------- %
Nord2                 = 1; % in CalcFEds, the reflection order is at most 1

Mtrun                 = zeros(Nord2+1,1e5,9);
Mtrun(1,1,2)          = -1; % initialization with the Tx

Nbrimg                = zeros(Nord2+1,1);
Nbrimg(1)             = 1;

NbrDSSlns             = zeros(Nord2+1,1);

PSLN                  = zeros(Nord2,1000,Nord2,3);
FSLN                  = zeros(Nord2,1000,Nord2,2);

RP                    = zeros(Nord2+1,1000,Nord2,3);
RF                    = zeros(Nord2+1,1000,Nord2,2);

if verbose_scattering(5)
    fprintf('   Calculate the diffuse scattering as first interaction... \n'); tic;
    CalcFEds_Image_Olivier();
    elapsedTime(5)    = toc;
    fprintf('   -> Diffuse scattering as the first interaction finished in %3.2f s! \n',elapsedTime(5));
else
    OutputDataFDS     = [];
end
fprintf('   ------- \n \n');

% ----------------------------------------------------------------------- %
%% 
Outputdata            = vertcat(OutputDataLos,OutputDataRef,OutputDataDiff,OutputDataLDS,OutputDataFDS);
Outputdata            = Outputdata(~isnan(Outputdata(:,8)),:);

if (saveResults)
    FileName        = ['./results/' beacons_id{m,2} '/Outputdata_Olivier_v2_r' num2str(Nreflx) '_s' num2str(n) '.mat'];
    save(FileName,'Outputdata','elapsedTime','-v7.3');
end

% ----------------------------------------------------------------------- %
%% reconstruct the channel impulse responses from the RT output data
BW                  = 500e6; % measurement bandwidth [MHz]
Mf                  = 300;   % number of frequency points

RTir                = ReconstructIR2(Outputdata,outwedges(12,1)*1e9,BW,Mf);
c                   = zeros(size(verbose_scattering));

for i = 1:length(verbose_scattering)
    if verbose_scattering(1,i)
        ind         = find(Outputdata(:,10) == i-1);
        RTir(:,i+1) = ReconstructIR2(Outputdata(ind,:),outwedges(12,1)*1e9,BW,Mf);
        c(1,i)      = length(ind);
    else
        RTir(:,i+1) = complex(nan,nan);
        c(1,i)      = nan;
    end
end

if (verbose)
    figure; clf; PlotScenario(Outputdata,wedges,outwedges(4:6,1),outwedges(7:9,1));
    xlabel('x [m]','FontSize',13); ylabel('y [m]','FontSize',13); zlabel('z [m]','FontSize',13); grid on;
    
    figure; clf; plot(10*log10(abs(RTir).^2),'.-'); grid on;
    xlabel('Propagation delay [ns]','FontSize',13); ylabel('Received power [dB]','FontSize',13);
end