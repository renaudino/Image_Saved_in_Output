% Generate the input file

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.26

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

function inputData_ArbitQuad (WedgesInput, outwedges)

% WedgesInput: data of blocks
% OutWedges  : data which is not related to blocks

global Aii Ar AzimutR CEP Conduct DBIMAGES DSFlag Elevatr emett freq kxpol Lam Lr Lt Model MSKFlag ...
       Mtrun Nblock NbrSlns Ninterac Nreflx NRFLMAX Path Permitt Receive_Pattern ReceiveType ...
       recept RTH Rxang Scoeff status TransmitType Trans_Pattern Txang wedges; % cell array to matrix

DBIMAGES            = [1 zeros(1,8)]; %  match the dimentation of Mtrun (M*N*9)
                                      % 1        flag     0--empty   1--point exist
                                      % 2 3      face     2--block index   3--surface index
                                      % 4 5 6    point
                                      % 7        number of surfaces
                                      % 8 9      previous level

NRFLMAX             = 10; % the maximal reflection order

status              = outwedges(1);
Nblock              = outwedges(2); % total number of blocks
kxpol               = outwedges(3); % related to the depolarization of the diffuse ray
emett               = outwedges(4:6); % transmitter position

wedges              = zeros(Nblock,6,4,3); % block coordinates (10 values in total for each block)
                                           % -> 1st dimension: block number
                                           % -> 2nd dimension: surface number of each block
                                           % -> 3rd dimension: point number of each surface
                                           % -> 4th dimension: coordinated of one point

DSFlag              = zeros(Nblock,1); % diffuse scattering flag (if the block has scattering): 0 -- not , 1 -- yes
MSKFlag             = zeros(Nblock,1); % penetration flag (if the block has penetration): 1 -- not , 0 -- yes

CEP                 = zeros(Nblock,1); % if the block is a perfect electric conductor: 0 -- not , 1 -- yes

Permitt             = zeros(Nblock,1); % block permittivity 
Conduct             = zeros(Nblock,1); % block conductivity

Model               = zeros(Nblock,1); % Model, Scoeff, Lam, Ar, Ali are related to diffuse scattering
Scoeff              = zeros(Nblock,1);

Lam                 = zeros(Nblock,1);
Ar                  = zeros(Nblock,1);
Aii                 = zeros(Nblock,1);

recept              = outwedges(7:9); % receiver position
Nreflx              = outwedges(10); % number of reflections

Mtrun(1,1,:)        = DBIMAGES;
Mtrun(1,1,2)        = -1; % start to build the image tree from Tx -> "-1"  index of Tx
Mtrun(1,1,4:6)      = emett; % coordinates of Tx

Path                = zeros(Nreflx+1,2); % the address of images

NbrSlns             = zeros(NRFLMAX,1);

for i = 1:Nblock
    wedges(i,1,1,1) = WedgesInput(1,i); % the point order should be counterclockwise
    wedges(i,1,1,2) = WedgesInput(2,i);
    wedges(i,1,1,3) = WedgesInput(3,i);
    wedges(i,1,2,1) = WedgesInput(4,i);
    wedges(i,1,2,2) = WedgesInput(5,i);
    wedges(i,1,2,3) = WedgesInput(6,i);
    wedges(i,1,3,1) = WedgesInput(16,i);
    wedges(i,1,3,2) = WedgesInput(17,i);
    wedges(i,1,3,3) = WedgesInput(18,i);
    wedges(i,1,4,1) = WedgesInput(13,i);
    wedges(i,1,4,2) = WedgesInput(14,i);
    wedges(i,1,4,3) = WedgesInput(15,i);
    
    wedges(i,2,1,1) = WedgesInput(4,i);
    wedges(i,2,1,2) = WedgesInput(5,i);
    wedges(i,2,1,3) = WedgesInput(6,i);
    wedges(i,2,2,1) = WedgesInput(7,i);
    wedges(i,2,2,2) = WedgesInput(8,i);
    wedges(i,2,2,3) = WedgesInput(9,i);
    wedges(i,2,3,1) = WedgesInput(19,i);
    wedges(i,2,3,2) = WedgesInput(20,i);
    wedges(i,2,3,3) = WedgesInput(21,i);
    wedges(i,2,4,1) = WedgesInput(16,i);
    wedges(i,2,4,2) = WedgesInput(17,i);
    wedges(i,2,4,3) = WedgesInput(18,i);
    
    wedges(i,3,1,1) = WedgesInput(7,i);
    wedges(i,3,1,2) = WedgesInput(8,i);
    wedges(i,3,1,3) = WedgesInput(9,i);
    wedges(i,3,2,1) = WedgesInput(10,i);
    wedges(i,3,2,2) = WedgesInput(11,i);
    wedges(i,3,2,3) = WedgesInput(12,i);
    wedges(i,3,3,1) = WedgesInput(22,i);
    wedges(i,3,3,2) = WedgesInput(23,i);
    wedges(i,3,3,3) = WedgesInput(24,i);
    wedges(i,3,4,1) = WedgesInput(19,i);
    wedges(i,3,4,2) = WedgesInput(20,i);
    wedges(i,3,4,3) = WedgesInput(21,i);
    
    wedges(i,4,1,1) = WedgesInput(10,i);
    wedges(i,4,1,2) = WedgesInput(11,i);
    wedges(i,4,1,3) = WedgesInput(12,i);
    wedges(i,4,2,1) = WedgesInput(1,i);
    wedges(i,4,2,2) = WedgesInput(2,i);
    wedges(i,4,2,3) = WedgesInput(3,i);
    wedges(i,4,3,1) = WedgesInput(13,i);
    wedges(i,4,3,2) = WedgesInput(14,i);
    wedges(i,4,3,3) = WedgesInput(15,i);
    wedges(i,4,4,1) = WedgesInput(22,i);
    wedges(i,4,4,2) = WedgesInput(23,i);
    wedges(i,4,4,3) = WedgesInput(24,i);
    
    wedges(i,5,1,1) = WedgesInput(10,i);
    wedges(i,5,1,2) = WedgesInput(11,i);
    wedges(i,5,1,3) = WedgesInput(12,i);
    wedges(i,5,2,1) = WedgesInput(7,i);
    wedges(i,5,2,2) = WedgesInput(8,i);
    wedges(i,5,2,3) = WedgesInput(9,i);
    wedges(i,5,3,1) = WedgesInput(4,i);
    wedges(i,5,3,2) = WedgesInput(5,i);
    wedges(i,5,3,3) = WedgesInput(6,i);
    wedges(i,5,4,1) = WedgesInput(1,i);
    wedges(i,5,4,2) = WedgesInput(2,i);
    wedges(i,5,4,3) = WedgesInput(3,i);
    
    wedges(i,6,1,1) = WedgesInput(13,i);
    wedges(i,6,1,2) = WedgesInput(14,i);
    wedges(i,6,1,3) = WedgesInput(15,i);
    wedges(i,6,2,1) = WedgesInput(16,i);
    wedges(i,6,2,2) = WedgesInput(17,i);
    wedges(i,6,2,3) = WedgesInput(18,i);
    wedges(i,6,3,1) = WedgesInput(19,i);
    wedges(i,6,3,2) = WedgesInput(20,i);
    wedges(i,6,3,3) = WedgesInput(21,i);
    wedges(i,6,4,1) = WedgesInput(22,i);
    wedges(i,6,4,2) = WedgesInput(23,i);
    wedges(i,6,4,3) = WedgesInput(24,i);
    
    DSFlag(i,1)     = WedgesInput(25,i);
    MSKFlag(i,1)    = WedgesInput(26,i);
    CEP(i,1)        = WedgesInput(27,i);
    Permitt(i,1)    = WedgesInput(28,i);
    Conduct(i,1)    = WedgesInput(29,i);
    Model(i,1)      = WedgesInput(30,i);
    Scoeff(i,1)     = WedgesInput(31,i);
    Lam(i,1)        = WedgesInput(32,i);
    Ar(i,1)         = WedgesInput(33,i);
    Aii(i,1)        = WedgesInput(34,i);
end

Ninterac            = outwedges(11); % 0 -- single scattering , 1 -- first order reflection and first order scattering (divided into first interaction and last interaction cases)
freq                = outwedges(12);

TransmitType        = outwedges(13);
if (TransmitType == 2)
    Lt              = outwedges(14);
elseif (TransmitType == 3)
    Trans_Pattern   = outwedges(14);
elseif (TransmitType == 4)
    Txang           = outwedges(14);
end 

ReceiveType         = outwedges(15);
if (ReceiveType == 2)
    Lr              = outwedges(16);
elseif (ReceiveType == 3)
    Receive_Pattern = outwedges(16);
    AzimutR         = outwedges(17);
    Elevatr         = outwedges(18);
elseif (ReceiveType == 4)
    Rxang           = outwedges(16);
end

RTH                 = outwedges(17); % related to diffraction

for i = 1:Nblock % whole coordinates of each point in one block
%     wedges(i,1,4,1) = wedges(i,1,1,1);
%     wedges(i,4,2,1) = wedges(i,1,1,1);
%     wedges(i,4,3,1) = wedges(i,1,1,1);
%     wedges(i,5,4,1) = wedges(i,1,1,1);
%     wedges(i,6,1,1) = wedges(i,1,1,1);
%     
%     wedges(i,1,4,2) = wedges(i,1,1,2);
%     wedges(i,4,2,2) = wedges(i,1,1,2);
%     wedges(i,4,3,2) = wedges(i,1,1,2);
%     wedges(i,5,4,2) = wedges(i,1,1,2);
%     wedges(i,6,1,2) = wedges(i,1,1,2);
%     
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     wedges(i,1,4,3) = wedges(i,1,1,3);
%     wedges(i,4,2,3) = wedges(i,1,1,3);
%     wedges(i,4,3,3) = wedges(i,1,1,3);
%     wedges(i,5,4,3) = wedges(i,1,1,3);
%     wedges(i,6,1,3) = wedges(i,1,1,3);
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     
%     wedges(i,1,3,1) = wedges(i,1,2,1);
%     wedges(i,2,1,1) = wedges(i,1,2,1);
%     wedges(i,2,4,1) = wedges(i,1,2,1);
%     wedges(i,5,3,1) = wedges(i,1,2,1);
%     wedges(i,6,2,1) = wedges(i,1,2,1);
%     
%     wedges(i,1,3,2) = wedges(i,1,2,2);
%     wedges(i,2,1,2) = wedges(i,1,2,2);
%     wedges(i,2,4,2) = wedges(i,1,2,2);
%     wedges(i,5,3,2) = wedges(i,1,2,2);
%     wedges(i,6,2,2) = wedges(i,1,2,2);
%     
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     wedges(i,1,3,3) = wedges(i,1,2,3);
%     wedges(i,2,1,3) = wedges(i,1,2,3);
%     wedges(i,2,4,3) = wedges(i,1,2,3);
%     wedges(i,5,3,3) = wedges(i,1,2,3);
%     wedges(i,6,2,3) = wedges(i,1,2,3);
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     
%     wedges(i,2,3,1) = wedges(i,2,2,1);
%     wedges(i,3,1,1) = wedges(i,2,2,1);
%     wedges(i,3,4,1) = wedges(i,2,2,1);
%     wedges(i,5,2,1) = wedges(i,2,2,1);
%     wedges(i,6,3,1) = wedges(i,2,2,1);
%     
%     wedges(i,2,3,2) = wedges(i,2,2,2);
%     wedges(i,3,1,2) = wedges(i,2,2,2);
%     wedges(i,3,4,2) = wedges(i,2,2,2);
%     wedges(i,5,2,2) = wedges(i,2,2,2);
%     wedges(i,6,3,2) = wedges(i,2,2,2);
%     
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     wedges(i,2,3,3) = wedges(i,2,2,3);
%     wedges(i,3,1,3) = wedges(i,2,2,3);
%     wedges(i,3,4,3) = wedges(i,2,2,3);
%     wedges(i,5,2,3) = wedges(i,2,2,3);
%     wedges(i,6,3,3) = wedges(i,2,2,3);
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     
%     wedges(i,3,3,1) = wedges(i,3,2,1);
%     wedges(i,4,1,1) = wedges(i,3,2,1);
%     wedges(i,4,4,1) = wedges(i,3,2,1);
%     wedges(i,5,1,1) = wedges(i,3,2,1);
%     wedges(i,6,4,1) = wedges(i,3,2,1);
%     
%     wedges(i,3,3,2) = wedges(i,3,2,2);
%     wedges(i,4,1,2) = wedges(i,3,2,2);
%     wedges(i,4,4,2) = wedges(i,3,2,2);
%     wedges(i,5,1,2) = wedges(i,3,2,2);
%     wedges(i,6,4,2) = wedges(i,3,2,2);
%     
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     wedges(i,3,3,3) = wedges(i,3,2,3);
%     wedges(i,4,1,3) = wedges(i,3,2,3);
%     wedges(i,4,4,3) = wedges(i,3,2,3);
%     wedges(i,5,1,3) = wedges(i,3,2,3);
%     wedges(i,6,4,3) = wedges(i,3,2,3);
%     %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
%     wedges(i,1,2,3) = wedges(i,1,1,3);
%     wedges(i,2,1,3) = wedges(i,1,1,3);
%     wedges(i,2,2,3) = wedges(i,1,1,3);
%     wedges(i,3,1,3) = wedges(i,1,1,3);
%     wedges(i,3,2,3) = wedges(i,1,1,3);
%     wedges(i,4,1,3) = wedges(i,1,1,3);
%     wedges(i,4,2,3) = wedges(i,1,1,3);
%     wedges(i,5,1,3) = wedges(i,1,1,3);
%     wedges(i,5,2,3) = wedges(i,1,1,3);
%     wedges(i,5,3,3) = wedges(i,1,1,3);
%     wedges(i,5,4,3) = wedges(i,1,1,3);
%     
%     wedges(i,1,4,3) = wedges(i,1,3,3);
%     wedges(i,2,3,3) = wedges(i,1,3,3);
%     wedges(i,2,4,3) = wedges(i,1,3,3);
%     wedges(i,3,3,3) = wedges(i,1,3,3);
%     wedges(i,3,4,3) = wedges(i,1,3,3);
%     wedges(i,4,3,3) = wedges(i,1,3,3);
%     wedges(i,4,4,3) = wedges(i,1,3,3);
%     wedges(i,6,1,3) = wedges(i,1,3,3);
%     wedges(i,6,2,3) = wedges(i,1,3,3);
%     wedges(i,6,3,3) = wedges(i,1,3,3);
%     wedges(i,6,4,3) = wedges(i,1,3,3);
end