% main function

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.26

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Using Matrix instead of cell array: Mtrun, Mpath
% Combine Construct with CalcPath: EffConstruct
% Construct without recursion: Construct
% Subdivision without recursion: subdivision Scase1 Scase2 Scase3  

% clear variables
clear global

dbstop if error

clc;

global DBIMAGES status Nblock kxpol emett wedges DSFlag MSKFlag CEP ...
       Permitt Conduct Model Scoeff Lam Ar Aii GDSFlag GMSKFlag GCEP ...
       GPermitt GConduct GModel GScoeff GLam GAr GAii Nbrimg ...
       Path recept Nreflx Ninterac freq TransmitType Lt Trans_Pattern ...
       Txang ReceiveType Lr Receive_Pattern AzimutR Elevatr Rxang RTH ...
       vnfaces K lambda Geta eta Rcoeff GRcoeff NbrSlns PSLN FSLN Reflex ...
       OutputDataRef EFMAX OutputDataLos DSN PDS FDS Area NbrDSSlns RP RF ...
       oldReflex DiffWedges OutputDataFDS OutputDataLDS oFace nFace ...
       DiffPSLN DiffASLN DiffNFSLN DiffFSLN Dsh OutputDataDiff Outputdata...
       Mtrun Mpath...   %  cell array to matrix
       SUB1 N_sub1 SUB2 N_sub2 SAT N_sat ISLN;  %  three sub functions of subdivision
       
   
Nord1 = 2;
Mtrun(1:Nord1+1,1:400000,1:9) = zeros(Nord1+1,400000,9); 
Nbrimg=zeros(Nord1+1,1);
Nbrimg(1) = 1;
    
inputData();

vnfaces = NormVect();       % normal perpendicular vector of each surface
lambda = (30/freq)*0.01;    % wavelength
Lt = lambda/2;
Lr = lambda/2;
K = 2*pi/lambda;            % wave number
GRcoeff = sqrt(1-(GScoeff).^2);
Rcoeff = sqrt(1-(Scoeff).^2);
Geta = complex(GPermitt,-60*GConduct*lambda);
eta = complex(Permitt,-60*Conduct*lambda);
aid=[1;1];
Reflex = 0;
EFMAX = 0;

% -----------------------------EffConstruct------------------------------ %
Mpath = zeros(Nreflx+1,(Nblock*6),5);
Mpath(1,1,1) = -1; 
Mpath(1,1,3:5) = emett;
NbrDSSlns = zeros(Nreflx+1,1);
PSLN = zeros(Nreflx,1000,Nreflx,3);
FSLN = zeros(Nreflx,1000,Nreflx,2);
ISLN = zeros(Nreflx,1000,Nreflx,3);
RP = zeros(Nreflx+1,1000,Nreflx,3);
RF = zeros(Nreflx+1,1000,Nreflx,2);
oldReflex = 0;
rvsds = 0;   % only have reflection

EffConstruct_Image(Nreflx,emett, rvsds);
% ----------------------------------------------------------------------- %

CalcELOS_Image();     % calculate the line of sight component
CalcEref_Image();     % calculate the reflection component
Outputdata_det = vertcat(OutputDataLos,OutputDataRef);

CalcEDiff_Image();    % calculate the diffraction component

Construct(2);   %  in CalcLEds, the reflection order is 2, at most
CalcLEds_Image();     % calculate the diffuse scattering as the last interaction


% ------------------------------ CalcFEds ------------------------------- %
% reallocate smaller matrix size, save time for loading globals in called function
NbrDSSlns = [];  
PSLN = [];
FSLN = [];
RP = []; 
RF = [];
Mtrun = [];
Nbrimg=[];

Nord2 = 1;     % reflection order in 'CalcFEds', change when need higher order
Mtrun = zeros(Nord2+1,Nblock*6,9);  %  1 reflection, so 'Nblock*6' , change when need higher order
Nbrimg = zeros(Nord2+1,1);
Nbrimg(1) = 1;
NbrDSSlns = zeros(Nord2+1,1);
PSLN = zeros(Nord2,1000,Nord2,3);
FSLN = zeros(Nord2,1000,Nord2,2);
RP = zeros(Nord2+1,1000,Nord2,3);
RF = zeros(Nord2+1,1000,Nord2,2);

CalcFEds_Image();     % calculate the diffuse scattering as the first interaction
% ----------------------------------------------------------------------- %
Outputdata = vertcat(OutputDataLos,OutputDataRef,OutputDataDiff,OutputDataLDS,OutputDataFDS);
m = 0;  
dis = Outputdata(:,13);
Eout_orig = complex(Outputdata(:,14),Outputdata(:,15));

[dis_up,ord] = sort(dis);    % order the delay
Eout = Eout_orig(ord);
c = 3e8;
del = dis_up/c;    % order the delay
B = 4800e6;        % filter Bandwidth
delt_f = 500e3;    % frequency resolution
Nf = ceil(B/delt_f);
for q = (-Nf/2):(Nf/2-1)
    m = m+1;
    Hf(m) = sum(Eout.*exp(-1i*2*pi*del*delt_f*q),1);    %*exp(1i*2*pi*freq*1e9*del(1))
end

filename = strcat(sprintf('RT_OUTPUTDATA'));
save(filename,'Outputdata_det','Outputdata'); 
