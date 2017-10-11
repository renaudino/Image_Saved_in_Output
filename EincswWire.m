function Eray = EincswWire(H,trans,pt_re)
% Emitted filed for a wire antenna
% H : wire half-length
% trans: antenna position
% pt_re: point where the field is calculated 

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.31
global K;
pt = reshape(pt_re,3,1);
F(1:3,1) = complex(0,0);
L = 2*H;
PA = pt-trans;
dPA = norm(PA);
dh = pt(3)-trans(3);
if (dh > 0)
    costta = dh/dPA;
    theta = acos(costta);
else
    costta = -dh/dPA;
    theta = pi-acos(costta);
end 
sintta = sqrt(1-costta^2);
dPAp = dPA*sintta;
sinphi = -PA(2)/dPAp;
cosphi = -PA(1)/dPAp;
if (sinphi >= 0)
    phi = acos(cosphi);
else
    phi = -acos(cosphi);
end 

f = (cos((K*L/2)*costta)-cos(K*L/2))/sintta;    % normalized radiation pattern on direction teta
if ((costta == 1) || (costta == -1))
    f = 0;
end 
if (dh == 0)
    costta = 0;
    sintta = 1;
    f = 1;
end 
if (L == 0)
    f = 1;
end 
if (f == 0)
    Eray(1:3,1) = complex(0,0);
else
    F(1) = complex(0,-cosphi*costta);    % theta unit vector
    F(2) = complex(0,-sinphi*costta);
    F(3) = complex(0,sintta);
    fac = exp(-1i*K*dPA);
    fac = f*fac;
    Eray = fac*F;
end 
