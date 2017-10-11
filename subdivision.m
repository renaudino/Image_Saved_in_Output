function subdivision(fvsl,pta_re,ptb_re,ptc_re,ptd_re,dsf,ppt_re)
% Subdivision of given surface according to far/close field condition
% SUB1  surfaces need subdivision
% SUB2  surfaces which are already divided, but still need subdivision
% SAT   surfaces satisfy far-field condition, not need subdivision

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.03

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01


global SUB1 N_sub1 SUB2 N_sub2 SAT N_sat;

% cntpt_re = zeros(3,1);

SUB1 = [];
N_sub1 = 0;
SUB2 = [];
N_sub2 = 0;
SAT = [];
N_sat = 0;

Scase1(pta_re,ptb_re,ptc_re,ptd_re,ppt_re)

% check if there is surface need further subdivision

while (isempty(SUB1) ~= 1) 
                           
                           
    for i_temp = 1:N_sub1
        
        pta_re(:,1) = SUB1(i_temp,1:3);
        ptb_re(:,1) = SUB1(i_temp,4:6);
        ptc_re(:,1) = SUB1(i_temp,7:9);
        ptd_re(:,1) = SUB1(i_temp,10:12);
        Scase2(pta_re,ptb_re,ptc_re,ptd_re,ppt_re)
       
    end
    
    SUB1 = SUB2;
    N_sub1 = N_sub2;
    SUB2 = [];
    N_sub2 = 0;
   
end

% Subdivision completed

for i = 1:N_sat
    
    cntpt_re(:,1) = SAT(i,1:3);
    Area_re = SAT(i,4);
    Scase3(fvsl,ppt_re,cntpt_re,Area_re,dsf)
    
end





