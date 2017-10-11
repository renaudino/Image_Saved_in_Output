function [Eds, ri] = dsfield (Einc, start_re, fin_re, sf, sp_re, surf)

% Diffuse scattering field
% Refer to the paper Vittorio D. 2007
% start : first point
% fin : last point
% sf: scattering face 
% sp: scattering point
% surf: size of element

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.10.3

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

% global vnfaces Model Ar Lam Aii GAr GLam GAii Scoeff kxpol GModel GScoeff;

global Aii Ar kxpol Lam Model Scoeff vnfaces;

Eout = complex(zeros(3,1),zeros(3,1));
Ft = Eout';
Fp = Ft;
ep = Ft;
amplEds = Ft;
start = zeros(3,1);
fin = zeros(3,1);
sp = zeros(3,1);

bl = 0;
fc = 0;

vnfaces_re = zeros(3,1);

num = 0;
denom = 0;

Eout(1:3,1) = complex(0,0);
start(:,1) = start_re;
fin(:,1) = fin_re;
sp(:,1) = sp_re;
bl = sf(1);
fc = sf(2);
si = sp-start;
ri = norm(si);
si = 1/ri*si;    % incidence unit vector
dh = sp(3)-start(3);

costh = dh/ri;
sinth = sqrt(1-costh.^2);

dy = sp(2)-start(2);
dx = sp(1)-start(1);

dp = ri*sinth;

sinphi = dy/dp;
cosphi = dx/dp;

Ft(1) = complex(cosphi*costh,0);
Ft(2) = complex(sinphi*costh,0);
Ft(3) = complex(-sinth,0);
Fp(1) = complex(-sinphi,0);
Fp(2) = complex(cosphi,0);
Fp(3) = complex(0,0);

ET = conj(Ft)*Einc;
EH = conj(Fp)*Einc;
EH = (-1)*EH;

ss = fin-sp;
rs = norm(ss);
ss = 1/rs*ss; % diffuse scattering unit vector

dh = fin(3)-sp(3);
costh = dh/rs;
sinth = sqrt(1-costh.^2);
dy = -sp(2)+fin(2);
dx = -sp(1)+fin(1);
dp = rs*sinth;
sinphi = dy/dp;
cosphi = dx/dp;

Ft(1) = complex(cosphi*costh,0);
Ft(2) = complex(sinphi*costh,0);
Ft(3) = complex(-sinth,0);
Fp(1) = complex(-sinphi,0);
Fp(2) = complex(cosphi,0);
Fp(3) = complex(0,0);

et = Ft*ET;
eh = Fp*EH;
ei = et+eh;

vnfaces_re(:,1) = vnfaces(bl,fc,:);

costi = -(vnfaces_re'*si);
vtemp = 2*costi*vnfaces_re;

sr = si+vtemp;
rr = norm(sr);
sr = 1/rr*sr;

costs = vnfaces_re'*ss;
cosfr = ss'*sr;
nsi = -si;

cosfi = ss'*nsi;

% if ((bl ~= 0) && (Model(bl) == 1)) || ((bl == 0) && (GModel == 1))    % choice of the diffuse scattering model
if (Model(bl) == 1) % choice of the diffuse scattering model
    denom = pi;
    num = costs;
end

% if ((bl ~= 0) && (Model(bl) == 2))
if (Model(bl) == 2)
    denom = Falpha(Ar(bl),costi);
    num = lobe(cosfr,Ar(bl));
% elseif ((bl == 0) && (GModel == 2))
%     denom = Falpha(GAr,costi);
%     num = lobe(cosfr,GAr);
end

% if ((bl ~= 0) && (Model(bl) == 3))
if (Model(bl) == 3)
    denom = Lam(bl)*Falpha(Ar(bl),costi)+(1-Lam(bl))*Falpha(Aii(bl),costi);
    num   = Lam(bl)*lobe(cosfr,Ar(bl))+(1-Lam(bl))*Falpha(Aii(bl),cosfi);
% elseif ((bl == 0) && (GModel == 3))
%     denom = GLam*Falpha(GAr,costi)+(1-GLam)*Falpha(GAii,costi);
%     num = GLam*lobe(cosfr,GAr)+(1-GLam)*Falpha(GAii,cosfi);
end

radic     = sqrt((costi*num*surf)/denom);
frp       = sp+sr;

Re2       = reshape(bl,1,1);
Re3       = reshape(start,3,1);
Re4       = reshape(frp,3,1);
Re5       = reshape(sp,1,1,1,3);
vn_temp   = reshape(vnfaces(bl,fc,:),3,1);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Eout      = RefField(-1,Re2,Re3,Re4,Re5,vn_temp,Einc);
% Eout = RefField(-1,bl,start,frp,sp,vn_temp,Einc);
[Eout,~,~] = RefFieldUP(-1,bl,start,frp,sp,vn_temp,Einc);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

amplEo    = abs(Eout);
amplEi    = abs(Einc);
rflcoeff  = norm(amplEo)/norm(amplEi);

% if (bl ~= 0)
amplEds   = radic*Scoeff(bl)*rflcoeff*ei;
% elseif (bl == 0)
%     amplEds = radic*GScoeff*rflcoeff*ei;
% end

ample     = abs(amplEds);
normeds   = norm(ample);
eds       = 1/normeds*amplEds; % co-polarization

ep(1)     = ss(2)*eds(3)-ss(3)*eds(2);
ep(2)     = ss(3)*eds(1)-ss(1)*eds(3);
ep(3)     = ss(1)*eds(2)-ss(2)*eds(1);

ample     = abs(ep);
normep    = norm(ample);

ep        = 1/normep*ep;
real_re   = -real(ep);
ep        = complex(real_re,imag(ep)); % cross-polarization

Eco       = normeds*sqrt(1-kxpol)*eds;
Exp       = normeds*sqrt(kxpol)*ep;

amplEds   = Eco+Exp;
cas       = exp(1j*2*pi*rand(1)); % random phase

Eds       = amplEds*cas;