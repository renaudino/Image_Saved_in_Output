function Scase2(pta_re,ptb_re,ptc_re,ptd_re,ppt_re)
% The ratio (d1/d2) is between (1~2), so take the central point as the
% center, divide the surface into four equal sub surfaces

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.03

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global lambda SUB2 N_sub2 SAT N_sat;

%--------------- unify variable size for code convertion -----------------%
% cntpt = zeros(3,1);
% cntpt_m = zeros(3,1);
% hpta = zeros(3,1);
% hptb = zeros(3,1);
% hptc = zeros(3,1);
% hptd = zeros(3,1);
%-------------------------------------------------------------------------%
pta = pta_re;
ptb = ptb_re;
ptc = ptc_re;
ptd = ptd_re;
cntpt(:,1) = (pta+ptb+ptc+ptd)/4;  
cntpt_m = cntpt';

% divide the surface into four equal sub surfaces
hpta = (pta-ptb)/2;
hptb = (ptb-ptc)/2;
hptc = (ptc-ptd)/2;
hptd = (ptd-pta)/2;
        
hpta = pta-hpta;
hptb = ptb-hptb;
hptc = ptc-hptc;
hptd = ptd-hptd;

pta = pta';
ptb = ptb';
ptc = ptc';
ptd = ptd';

hpta = hpta';
hptb = hptb';
hptc = hptc';
hptd = hptd';


points = [pta;hpta;cntpt_m;hptd;hpta;ptb;hptb;cntpt_m;cntpt_m;hptb;ptc;hptc;hptd;cntpt_m;hptc;ptd]; 

for i = 1:4:16   % check each subsurface, if subdivision is needed
    points_temp = points(i:(i+3),:);
    cntpt(:,1) = (sum(points_temp(:,1:3))/4)';
    ds = norm(ppt_re-cntpt);
    d1 = norm( points(i,:)-points(i+1,:));
    d2 = norm( points(i,:)-points(i+3,:));
    Rs = max(d1,d2);
    
    if (Rs > (sqrt(ds*lambda/2)))    % far field not satisfied, -> SUB2
        N_sub2 = N_sub2+1;
        SUB2(N_sub2,:) = reshape(points_temp',12,1);

        
    else    % far field satisfied, -> SAT 
        N_sat = N_sat+1;
        SAT(N_sat,1:3) = cntpt(1:3);
        SAT(N_sat,4) = d1*d2;
      
    end
    
end


        
        
        
        
        