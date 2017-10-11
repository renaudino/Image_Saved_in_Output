function [fi,bet] = edgefixp(e,EV,sno)
% Edge fixed coordinate system (incident ray)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6
if (norm(e) <= 1.0e-6)
    bet(:,1) = EV;
    fi(:,1) = cross(sno,bet);    
else
    fi(:,1) = cross(sno,e);
    fi = 1/norm(fi)*fi;
    bet = cross(fi,sno);
end 