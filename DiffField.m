function [Ediff] = DiffField (fc, source, qdiff_re, obs, n_re, nn_re, e_re, Einc)

% Calculates the diffracted field
% 
% fc: block number of diffraction
% source: transmitter position
% obs: receiver position
% qdiff: diffraction point
% n: normal vector to the o-face
% nn: normal vector to the n-face
% e: edge unit vector
% Ein: incident field
% Ediff: field at the observation point

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.7

global Dsh K;

qdiff(:,1)         = qdiff_re;
n(:,1)             = n_re;
nn(:,1)            = nn_re;
e(:,1)             = e_re;

Svect              = qdiff-source;
ds                 = norm(Svect);
Svect              = 1/ds*Svect;

rhovect            = obs-qdiff;
dsr                = norm(rhovect);
rhovect            = 1/dsr*rhovect;

EV                 = cross(rhovect,Svect);
EV                 = 1/norm(EV)*EV;

if (norm(e) >= 1.0e-6)
    t              = cross(n,e);
    cosdel         = t'*nn;
    
    if (cosdel >= 0)
        e          = -e;
        t          = -t;
    end
else
    t              = cross(n,EV);
    cosdel         = t'*nn;
    
    if (cosdel >= 0)
        EV         = -EV;
        t          = -t;
    end 
end 

[phivect,betavect] = edgefixp(e,EV,Svect);

cphivect           = complex(phivect,0);
cbetavect          = complex(betavect,0);

Eincphi            = dot(cphivect,Einc);
Eincbeta           = dot(cbetavect,Einc);

phip               = fphip(Svect,e,t,n);
phi                = fphi(rhovect,e,t,n);

cosbeta0           = dot(Svect,e);
sinbeta0           = sqrt(1-cosbeta0^2);

FDsh(sinbeta0,phip,ds,phi,dsr,Svect,n,nn,fc);

% calculates the diffraction coefficients
fac                = -1;

Ds                 = Dsh(1);
Dh                 = Dsh(2);

[phivect,betavect] = edgefix(e,EV,rhovect);

% calculates the diffraction coefficients in edge-fixed coordinate system
cfac               = fac*exp(-1i*K*dsr);
Ediffbeta          = Ds*(Eincbeta*cfac);
Ediffphi           = Dh*(Eincphi*cfac);

Ediff              = (betavect*Ediffbeta)+(phivect*Ediffphi);