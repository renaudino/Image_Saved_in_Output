function Scase1(pta_re,ptb_re,ptc_re,ptd_re,ppt_re)
% The ratio 'd1/d2' > 1, firstly, the surface is equally divided into  
% several sub surfaces, each sub surface satisfies the condition  
% '(d1/d2) between (1~2)', if necessary, call Scase2 for further subdivision

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.03

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01


global lambda SUB1 N_sub1 SAT N_sat;

%--------------- unify variable size for code convertion -----------------%
% hp = zeros(3,1);
% hp1 = zeros(3,1);
% hp2 = zeros(3,1);
% cntpt = zeros(3,1);
% hpta = zeros(3,1);
% hptb = zeros(3,1);
% hptc = zeros(3,1);
% hptd = zeros(3,1);
% d1 = 0;
% d2 = 0;
%-------------------------------------------------------------------------%

pta = pta_re;
ptb = ptb_re;
ptc = ptc_re;
ptd = ptd_re;

cntpt(:,1) = (pta+ptb+ptc+ptd)/4;    % centre point of the surface

d1 = norm(pta-ptb);
d2 = norm(pta-ptd);
Rs = max(d1, d2); % evaluating the larger one between d1 and d2
ds = norm(ppt_re-cntpt);

if (Rs > (sqrt(ds*lambda/2)))    % far field not satisfied
    Rt = d1/d2;
    count = floor(Rs/min(d1,d2));
    
    if (Rt > 1)   % divide the surface along the longer edge 
        hp = pta - ptb;
        for i = 1:count
            hp1 = hp*(i-1)/count;
            hpta = pta-hp1;
            hptd = ptd-hp1;
            hp2 = hp*i/count;
            hptb = pta-hp2;
            hptc = ptd-hp2;
            cntpt(:,1) = (hpta+hptb+hptc+hptd)/4;
            
            % judge if far field condition is satisfied
            d1 = norm(hpta-hptb);
            d2 = norm(hpta-hptd);
            Rs = max(d1, d2);
            ds = norm(ppt_re-cntpt);
            
            if (Rs > (sqrt(ds*lambda/2))) % far field not satisfied, -> SUB1
                N_sub1 = N_sub1+1;
                SUB1(N_sub1,1:3) = hpta;
                SUB1(N_sub1,4:6) = hptb;
                SUB1(N_sub1,7:9) = hptc;
                SUB1(N_sub1,10:12) = hptd;
                
            else   % far field satisfied, -> SAT   
                N_sat = N_sat+1;
                SAT(N_sat,1:3) = cntpt(:,1);
                SAT(N_sat,4) = d1*d2;
            end
        end
    else
        
        hp = pta-ptd;
        for i = 1:count
            hp1 = hp*(i-1)/count;
            hpta = pta-hp1;
            hptb = ptb-hp1;
            hp2 = hp*i/count;
            hptd = pta-hp2;
            hptc = ptb-hp2;
            cntpt(:,1) = (hpta+hptb+hptc+hptd)/4; 
            
            % judge if far field condition is satisfied
            d1 = norm(hpta-hptb);
            d2 = norm(hpta-hptd);
            Rs = max(d1, d2);
            ds = norm(ppt_re-cntpt);
            
            if (Rs > (sqrt(ds*lambda/2))) % far field not satisfied, -> SUB1
                N_sub1 = N_sub1+1;
                SUB1(N_sub1,1:3) = hpta(:,1);
                SUB1(N_sub1,4:6) = hptb;
                SUB1(N_sub1,7:9) = hptc;
                SUB1(N_sub1,10:12) = hptd;
            else   % far field satisfied, -> SAT   
                N_sat = N_sat+1; 
                SAT(N_sat,1:3) = cntpt(:,1);
                SAT(N_sat,4) = d1*d2;
            end
        end
    end
       
    
else   % far field satisfied  -> SAT
    N_sat = N_sat+1;
    SAT(N_sat,1:3) = cntpt(:,1);
    SAT(N_sat,4) = d1*d2;
  
    
end