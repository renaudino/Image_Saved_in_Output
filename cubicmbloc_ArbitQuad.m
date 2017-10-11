clearvars; clear -global;
close all; clc;

%% 
saveResults            = 0;           % save the results (or not)
verbose                = 1;           % plot (or not)

% verbose_scattering     = [1 1 1 1 1]; % [LOS Reflections Diffractions LDS FDS]
verbose_scattering     = [0 0 0 0 1];

global vnfaces wedges;

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

ArbitQuad_blocks();                    % generating the indoor office environment

% ----------------------------------------------------------------------- %
%% generate the "WedgesInput" structure
% 'x', 'y', 'z' coordinates (of points #1, #2, #3 and #4, respectively)
WedgesInput(1:3:22,:)   = Wedges_x;
WedgesInput(2:3:23,:)   = Wedges_y;
WedgesInput(3:3:24,:)   = Wedges_z;

WedgesInput            = isPolyCcw_ArbitQuad(WedgesInput);

% electromagnetic properties of the blocks
for i = 1:size(WedgesInput,2)
     mep               = Mat_ElectProperties(Materials(1,i));
     
     WedgesInput(25,i) = mep.DSF;     % diffuse scattering flag (0 -> no ; 1 -> yes)
     WedgesInput(26,i) = mep.PF;      % penetration flag (0 -> yes ; 1 -> no)
     WedgesInput(27,i) = mep.PEC;     % perfect electric conductor (0 -> no ; 1 -> yes)
     
     WedgesInput(28,i) = mep.Permitt; % permittivity of the block
     WedgesInput(29,i) = mep.Conduct; % conductivity of the block
     
     WedgesInput(30,i) = mep.DSM;     % diffuse scattering model (1 -> Lambertian ; 2 -> directive ; 3 -> backscattering)
     WedgesInput(31,i) = mep.SC;      % scattering coefficient
     
     WedgesInput(32,i) = mep.RF;      % repartition factor in backscattering model
     WedgesInput(33,i) = mep.WSL;     % width of the scattering lobe
     WedgesInput(34,i) = mep.WBSL;    % width of the backscattering lobe
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
outwedges(10,1)        = 2;

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
inputData_ArbitQuad(WedgesInput,outwedges);

% normal perpendicular vector of each surface
vnfaces               = NormVect();


%% 
n    = 3;
f    = 6;

flag = isSurface(wedges(n,f,:,:))

if (verbose)
    figure; clf; PlotBlocks(wedges(n,:,:,:),[],[]);
    xlabel('x [m]','FontSize',13); ylabel('y [m]','FontSize',13); zlabel('z [m]','FontSize',13); grid on;
    
    hold on;
    for i = 1:6
        cnt = mean(squeeze(wedges(n,i,:,:)),1);
        hold on; plot3(cnt(1)+[0 vnfaces(n,i,1)],cnt(2)+[0 vnfaces(n,i,2)],cnt(3)+[0 vnfaces(n,i,3)],'o-','linewidth',10);
    end
end

%% 
c1 = squeeze(wedges(n,f,1,:));
c2 = squeeze(wedges(n,f,2,:));
c3 = squeeze(wedges(n,f,3,:));
c4 = squeeze(wedges(n,f,4,:));

w12 = c2-c1;
w14 = c4-c1; n1 = cross(w12,w14); n1 = n1/norm(n1);

w21 = c1-c2;
w23 = c3-c2; n2 = cross(w12,w14); n2 = n2/norm(n2);

w32 = c2-c3;
w34 = c4-c3; n3 = cross(w12,w14); n3 = n3/norm(n3);

w41 = c1-c4;
w43 = c3-c4; n4 = cross(w12,w14); n4 = n4/norm(n4);

[squeeze(vnfaces(n,f,:)) n1 n2 n3 n4]











