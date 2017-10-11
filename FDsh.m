function FDsh(be0sin,phip,si,phi,sr,S,no,nn,numb)
% Diffraction coefficient (UTD)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6
global K CEP GCEP eta Geta GRcoeff Rcoeff Dsh;

Dsh = zeros(2,1);
Lm = ((si*sr)/(si+sr));
L = Lm*be0sin^2;
%alp = pi-acos(dot(no,nn));
alp = pi-acos(no'*nn);
n = 2-(alp/pi);

mer = K*L;
QC = (-1.0/(2.0*n*sqrt(2.0*pi*K)*be0sin))*(exp(-1i*pi/4.0));
aplres = aplus(n,phi-phip);
var = mer*aplres;
argu = pi+phi-phip;

if (argu == 0.0)
    argu = 0.00000001;
    aplres = aplus(n,0.00000001-pi);
    var =  mer*aplres;
end
Fres = F(var);
D1 = QC*(1.0/tan(argu/(2.0*n))*Fres);
amores = amoins(n,phi-phip);
var = mer*amores;
argu = pi-phi+phip;

if (abs(argu) == 0.0)
    argu = 0.00000001;
    amores = amoins(n,pi-0.00000001);
    var = mer*amores;
end 
Fres = F(var);
D2 = QC*(1.0/tan(argu/(2.0*n))*Fres);

aplres = aplus(n,phi+phip);
var = mer*aplres;
argu = pi+phi+phip;

if (argu == 0.0)
    argu = 0.00000001;
    aplres = aplus(n,0.00000001-pi);
    var = mer*aplres;
end

Fres = F(var);
D3 = QC*(1.0/tan(argu/(2.0*n))*Fres);

amores = amoins(n,phi+phip);
var = mer*amores;
argu = pi-phi-phip;

if (argu == 0.0)
    argu = 0.00000001;
    amores = amoins(n,pi-0.00000001);
    var = mer*amores;
end

Fres = F(var);
D4 = QC*(1.0/tan(argu/(2.0*n))*Fres);

S = -S;

%teta0 = pi/2 - acos(dot(S,no));
%tetan = pi/2 - acos(dot(S,nn));
teta0 = pi/2 - acos(S'*no);
tetan = pi/2 - acos(S'*nn);

if ((numb ~= 0) && (CEP(numb) == 1)) %|| ((numb == 0) && (GCEP == 1))
    Dsh(1) = (D1+D2)-(D3+D4);
    Dsh(2) = (D1+D2)+(D3+D4);
else
    cct02 = complex((cos(teta0))^2,0);
    cctn2 = complex((cos(tetan))^2,0);
    cst0 = complex(sqrt(1-real(cct02)),0);
    cstn = complex(sqrt(1-real(cctn2)),0);
    if numb == 0
        Ct0 = Geta-cct02;
        Ch0 = Ct0/(Geta^2);
        Rt0 = (cst0-sqrt(Ct0))/(cst0+sqrt(Ct0));
        Rh0 = (cst0-sqrt(Ch0))/(cst0+sqrt(Ch0));
        Ctn = Geta-cctn2;
        Chn = Ctn/(Geta^2);
        Rtn = (cstn-sqrt(Ctn))/(cstn+sqrt(Ctn));
        Rhn = (cstn-sqrt(Chn))/(cstn+sqrt(Chn));
        Rtn = GRcoeff*Rtn;
        Rhn = GRcoeff*Rhn;
        Rt0 = GRcoeff*Rt0;
        Rh0 = GRcoeff*Rh0;
        Dsh(1) = (D1+D2)+((D3*Rtn)+(D4*Rt0));
        Dsh(2) = (D1+D2)+((D3*Rhn)+(D4*Rh0));
    else 
        Ct0 = eta(numb)-cct02;
        Ch0 = Ct0/(eta(numb)^2);
        Rt0 = (cst0-sqrt(Ct0))/(cst0+sqrt(Ct0));
        Rh0 = (cst0-sqrt(Ch0))/(cst0+sqrt(Ch0));
        Ctn = eta(numb)-cctn2;
        Chn = Ctn/(eta(numb)^2);
        Rtn = (cstn-sqrt(Ctn))/(cstn+sqrt(Ctn));
        Rhn = (cstn-sqrt(Chn))/(cstn+sqrt(Chn));
        Rtn = Rcoeff(numb)*Rtn;
        Rhn = Rcoeff(numb)*Rhn;
        Rt0 = Rcoeff(numb)*Rt0;
        Rh0 = Rcoeff(numb)*Rh0;
        Dsh(1) = (D1+D2)+((D3*Rtn)+(D4*Rt0));
        Dsh(2) = (D1+D2)+((D3*Rhn)+(D4*Rh0));
    end 
end 