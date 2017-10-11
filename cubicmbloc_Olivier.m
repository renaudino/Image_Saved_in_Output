clearvars; clear -global;
close all; clc;

%% 
saveResults            = 0;           % save the results (or not)
verbose                = 1;           % plot (or not)

verbose_scattering     = [1 1 1 1 1]; % [LOS Reflections Diffractions LDS FDS]
% verbose_scattering     = [0 1 0 0 0];

global Conduct EFMAX emett eta freq FSLN ISLN K lambda Lr Lt Mpath Mtrun Nblock Nbrimg NbrDSSlns Nreflx oldReflex ...
       Outputdata OutputDataDiff OutputDataFDS OutputDataLDS OutputDataLos OutputDataRef ...
       Permitt PSLN Rcoeff Reflex RF RP Scoeff trun2 vnfaces wedges;

% ----------------------------------------------------------------------- %
%% generate the indoor environment
withUser               = 1;         % a human holding the phone (or not)
noFurniture            = 0;         % no furniture in the environment (or some)

fprintf('   \n');
fprintf('   ------- \n');
fprintf('   (*) Generating the office indoor environment... \n');
if (withUser)
    fprintf('          -> with human body... \n');
end
if (~noFurniture)
    fprintf('          -> with furniture... \n');
end
fprintf('   ------- \n\n');

ait_floorplan();                    % generating the indoor office environment

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

% 'x', 'y', 'z' coordinates of the Bluetooth Low Energy (BLE) beacons
beacons_id             = {'17ab7134-c04f-482b-9982-ae6b4653d464.7.53645' 'qRc3' ; ...
                          '17ab7134-c04f-482b-9982-ae6b4653d464.6.60367' 'vqex' ; ...
                          '17ab7134-c04f-482b-9982-ae6b4653d464.4.60652' 'e68u' };

beacon_dim             = [15 55 56]*1e-3; % (OR): {height , width , depth} [m]

M                      = size(beacons_id,1);
m                      = 2;

fprintf('   ------- \n');
fprintf('   (*) Beacon %s selected... \n',beacons_id{m,2});
fprintf('   ------- \n\n');

switch beacons_id{m,2} % (OR): position of the beacons
    case 'qRc3'
        outwedges(4,1) =  1.3205+(beacon_dim(1,1)/2)*sind(theta);
        outwedges(5,1) =  2.0063-(beacon_dim(1,1)/2)*cosd(theta);
        outwedges(6,1) =  1.8000;
    case 'vqex'
        outwedges(4,1) =  4.6938-(0.10+beacon_dim(1,2)/2)*sind(theta)+(beacon_dim(1,1)/2)*cosd(theta);
        outwedges(5,1) =  7.9204-(0.10+beacon_dim(1,2)/2)*cosd(theta)-(beacon_dim(1,1)/2)*sind(theta);
        outwedges(6,1) =  2.7500;
    case 'e68u'
        outwedges(4,1) = 11.6025; %mean(WedgesInput(1:2:7,55));
        outwedges(5,1) =  3.9939; %max(WedgesInput(2:2:8,55))+beacon_dim(1,1)/2;
        outwedges(6,1) =  1.8000;
end

% reflection order
outwedges(10,1)        = 3;

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
%% generate the sampling grid in the indoor environment
%  type of indoor scenario
scenario               = '0'; % (OR): '0' -> office scenario
                              %       '1' -> AIT 3rd floor indoor scenario
                              %       '2' -> AIT multi-floor indoor scenario
genSamplingGrid();

n                      = 150;
outwedges(7:9,1)       = s(:,n);

% input file
inputData_Olivier(WedgesInput,outwedges);

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
if verbose_scattering(2)
    fprintf('   ------- \n');
    fprintf('   Build up the reflection tree... \n'); tic;
%     EffConstruct_Image(Nreflx,emett,rvsds);
    EffConstruct_Image2(rvsds);
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

trun2                 = zeros(1e6,7);

if verbose_scattering(4)
    fprintf('   Calculate the diffuse scattering as last interaction... \n'); tic;
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    Construct(Nord1);
    CalcLEds_Image_Olivier();
    OutputDataLDS2 = OutputDataLDS; OutputDataLDS = [];
    
    
    Construct2(Nord1);
    CalcLEds2();
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
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

trun2         = zeros(1e6,7);

if verbose_scattering(5)
    fprintf('   Calculate the diffuse scattering as first interaction... \n'); tic;
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    disp('   -> First CalcFEds_Image_Olivier...');
    CalcFEds_Image_Olivier();
    OutputDataFDS2 = OutputDataFDS; OutputDataFDS = [];
    
    disp('   -> And now CalcFEds2...');
    CalcFEds2();
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
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

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
if verbose_scattering(4)
    RTir(:,end+1) = ReconstructIR2(OutputDataLDS2(~isnan(OutputDataLDS2(:,8)),:),outwedges(12,1)*1e9,BW,Mf);
    c(1,end+1)    = sum(~isnan(OutputDataLDS2(:,8)));
end
if verbose_scattering(5)
    RTir(:,end+1) = ReconstructIR2(OutputDataFDS2(~isnan(OutputDataFDS2(:,8)),:),outwedges(12,1)*1e9,BW,Mf);
    c(1,end+1)    = sum(~isnan(OutputDataFDS2(:,8)));
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

if (verbose)
    figure; clf; PlotScenario(Outputdata,wedges([1:202 255:end],:,:,:),nan(3,1),nan(3,1));
    xlabel('x [m]','FontSize',13); ylabel('y [m]','FontSize',13); zlabel('z [m]','FontSize',13); grid on;
    
    figure; clf; plot(10*log10(abs(RTir).^2),'.-'); grid on;
    xlabel('Propagation delay [ns]','FontSize',13); ylabel('Received power [dB]','FontSize',13);
end






% %% 
% mu = [];
% P  = [];
% 
% Outputdata_det = Outputdata;
% 
% for i = 1:Nreflx
%     ind                 = find(and(Outputdata_det(:,10) == 1 , Outputdata_det(:,11) == i));
%     if ~isempty(ind)
%         [az_tx,el_tx,~] = cart2sph(Outputdata_det(ind,12)-Outputdata_det(ind,1), ...
%                                    Outputdata_det(ind,13)-Outputdata_det(ind,2),Outputdata_det(ind,14)-Outputdata_det(ind,3));
%         
%         [az_rx,el_rx,~] = cart2sph(Outputdata_det(ind,12+3*(i-1))-Outputdata_det(ind,4), ...
%                                    Outputdata_det(ind,12+3*(i-1)+1)-Outputdata_det(ind,5),Outputdata_det(ind,12+3*(i-1)+2)-Outputdata_det(ind,6));
%         
%         mu              = cat(1,mu,[Outputdata_det(ind,7)/3e8 az_tx (pi/2)-el_tx az_rx (pi/2)-el_rx]);
%         P               = cat(1,P,abs(complex(Outputdata_det(ind,8),Outputdata_det(ind,9))).^2);
%     end
% end
% ind                     = find(Outputdata_det(:,10) == 1);
% XYZ                     = Outputdata_det(ind,12:12+3*(i-1)+2);
% 
% 
% %% 
% Cmax         = 20;
% 
% I            = zeros(size(mu,1),Cmax);
% mu_c         = cell(1,Cmax);
% 
% vo           = zeros(Cmax,1);
% vu           = zeros(Cmax,1);
% 
% for c = 1:Cmax
%     [I(:,c),mu_c{1,c}] = Kmeans(mu,P,c);
%     [vo(c,1),vu(c,1)]  = KimParks_idx(mu_c{1,c},mu,P,I(:,c));
% end
% voN                    = (vo-min(vo))/(max(vo)-min(vo));
% vuN                    = (vu-min(vu))/(max(vu)-min(vu));
% 
% KP                     = voN+vuN;
% 
% [~,C_opt]              = min(KP);
% 
% if (verbose)
%     figure; clf;
%     subplot(2,1,1); plot([voN vuN KP],'linewidth',2); grid on;
%     xlabel('Number of clusters','FontSize',13); ylabel('Kim-Park index','FontSize',13); legend('voN','vuN','KP');
%     
%     subplot(2,2,3); hold on;
%     for c = 1:C_opt
%         scatter3(mu(I(:,C_opt) == c,1)*1e9,rad2deg(mu(I(:,C_opt) == c,2)),rad2deg(mu(I(:,C_opt) == c,3)),'filled');
%     end
%     xlabel('\tau [ns]','FontSize',13); ylabel('\phi_{AoD} [°]','FontSize',13); zlabel('\theta_{AoD} [°]','FontSize',13);
%     title(sprintf('C_opt = %d clusters',C_opt)); grid on;
%     
%     subplot(2,2,4);
%     PlotBlocks(wedges([1:202 255:end],:,:,:),[],[]); hold on;
%     for c = 1:C_opt
%         scatter3(XYZ(I(:,C_opt) == c,1),XYZ(I(:,C_opt) == c,2),XYZ(I(:,C_opt) == c,3),'filled');
%     end
%     xlabel('x [m]','FontSize',13); ylabel('y [m]','FontSize',13); zlabel('z [m]','FontSize',13); grid on;
% end