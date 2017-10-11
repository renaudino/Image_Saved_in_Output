function Eout = ReceWire(Ein,pt_re,H)
% Reception Radiation pattern for a wire antenna
% Calculates the received field weighted by the terminal radiation pattern
% H : wire half-length
% pt_re : point from where the ray is coming

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.31
global K recept;
pt = reshape(pt_re,3,1);
F = zeros(3,1);
PA = pt-recept;
dPA = norm(PA);
costta = (pt(3)-recept(3))/dPA;
theta = acos(costta);
sintta = sqrt(1-costta^2);
L = 2*H;
f = (cos((K*L/2)*costta)-cos(K*L/2))/sintta;
if ((costta == 1) || (costta == -1))
    f = 0;
end 
dy = pt(2)-recept(2);
dx = pt(1)-recept(1);
dPAp = dPA*sintta;
sinphi = dy/dPAp;
cosphi = dx/dPAp;
if (sinphi >= 0)
    phi = acos(cosphi);
else 
    phi = -acos(cosphi);
end 
if (L == 0)
    f = 1;
end 
Eo = f*Ein;
F(1) = complex(0,-cosphi*costta);
F(2) = complex(0,-sinphi*costta);
F(3) = complex(0,sintta);
Eout = reshape(Eo,1,3)*F;

