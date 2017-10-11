function [Eout, Rt, Rh] = RefFieldUP (pblo, blo, E_re, R_re, qr_re, n_re, Ein)

% Calculates the reflected field
% blo : block number for which the reflected field is evaluated
% E : transmitter position
% R : receiver position
% qr : reflection point
% n : ext. norm.
% Ein : incident field
% Eout : field at the observation point (R)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.26

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
%          2014.02.06(save the reflection coefficients)

% global CEP eta GCEP Geta GRcoeff K Rcoeff vnfaces wedges;
global CEP eta K Rcoeff;

%%%%%%%%% Incident wave coordinate system calculation : eti & ehi %%%%%%%%%
% eti is the perpendicular vector to the incident plane
% ehi is the parallel vector to the incident plane

vr                  = zeros(3,1);

E                   = reshape(E_re,3,1);
qr                  = reshape(qr_re,3,1);
n                   = reshape(n_re,3,1);
R                   = reshape(R_re,3,1);

vi                  = qr-E;
di                  = norm(qr-E);
vi                  = 1/di*vi;

vr(:,1)             = R-qr;
dr                  = norm(R-qr);
vr                  = 1/dr*vr;

eti                 = cross(vi,n);

csfi2               = complex(norm(eti)^2,0);
ccfi                = complex(max(0,real(sqrt(1-csfi2))),0);

% if (norm(eti) <= 1.0e-6) % if incident wave is normal to the surface, i.e. (cross-product = 0) <=> (theta_inc = 0)
    [eti,ehi]       = cart2rayfixed(vi); % (OR): eti -> unitary parallel vector
% end                                      %       ehi -> unitary perpendicular vector

ehr                 = cross(eti,vr);

%%%%%%%%%%%%%%%%% E components in the SW-fixed coordinate system %%%%%%%%%%%%%%%
coEh                = ehi'*Ein;
coEt                = eti'*Ein;

if (CEP(blo) == 1)
    Rt              = complex(-1,0); % -> perpendicular polarization coefficient
    Rh              = complex(1,0); % -> parallel polarization coefficient
else
    if (pblo == -1)
        Ct          = eta(blo)-csfi2;
        Ch          = Ct/eta(blo)^2;
    else
        Ct          = (eta(blo)/eta(pblo))-csfi2;
        Ch          = Ct/(eta(blo)/eta(pblo))^2;
    end
    Rt              = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct));
    Rh              = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch));
end

fac                 = exp(-1i*K*dr);

Eout                = fac*((ehr*(Rh*coEh))+(eti*(Rt*coEt)));
Eout                = Rcoeff(blo)*Eout; % updated on 18.10.2011: multiplying the field and the R coefficient that  
                                        %                        takes into account the diffuse scattering power reduction