function [Eout,Rt,Rh] = RefField(pblo,blo,E_re,R_re,qr_re,n_re,Ein)
% Calculates the reflected field
% blo : block number for which the reflected field is evaluated		  
% E : transm. position                                                   
% R : recept pos.                                                          
% qr : reflecion point                                                     
% n : ext. norm.                                                                                                             				       
% Ein : incident field                                                      
% Eout : field at the obs. point (R)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.26

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global CEP eta K Rcoeff;

%%%%%%%%% Incident wave coordinate system calculation : eti & ehi%%%%%%%%%
% eti is the perpendicular vector to the incident plane 
% ehi is the parallel vector to the incident plane
vr = zeros(3,1); 
ccfi = 0+0i;
csfi2_temp = 0;
E = reshape(E_re,3,1);
qr = reshape(qr_re,3,1);
n = reshape(n_re,3,1);
R = reshape(R_re,3,1);
vi = qr - E;
di = norm(qr - E);
vi = 1/di*vi;
vr(:,1) = R - qr;
dr = norm(R - qr);
vr = 1/dr*vr;
eti = cross(vi,n);
csfi2 = complex(norm(eti)^2,0);
csfi2_temp = real(sqrt(1-csfi2));
if (1-csfi2)<0
    ccfi = complex(0,0);
else
    ccfi = complex(csfi2_temp,0);
end 

if (norm(eti) <= 1.0e-6)
    eti = [0;0;1];
end 

eti = 1/norm(eti)*eti;

ehi = cross(eti,vi);
ehr = cross(eti,vr);

%%%%%%%%%%%%%%%%% E components in the SW-fixed coord. syst.%%%%%%%%%%%%%%%
%coEh = dot(ehi,Ein);
%coEt = dot(eti,Ein);
coEh = ehi'*Ein;
coEt = eti'*Ein;

% if blo == 0
%     if GCEP == 1
%         Rh = complex(1,0);
%         Rt = complex(-1,0);
%     else
%         if (pblo == -1)    % previous medium is air
%              Ct = Geta - csfi2;
%              Ch = Ct/(Geta^2);
%              Rt = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct));
%              Rh = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch));
%         else     % previous medium is not air
%              Ct = (Geta/eta(pblo)) - csfi2;
%              Ch = Ct/((Geta/eta(pblo))^2);
%              Rt = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct));
%              Rh = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch));
%         end 
%     end
% else
    if (CEP(blo) == 1)
        Rh = complex(1,0);
        Rt = complex(-1,0);
    else
        if (pblo == -1)
            Ct = eta(blo) - csfi2;
            Ch = Ct/(eta(blo)^2);
            Rt = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct));
            Rh = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch));
        else 
            Ct = (eta(blo)/eta(pblo)) - csfi2;
            Ch = Ct/((eta(blo)/eta(pblo))^2);
            Rt = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct));
            Rh = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch));
        end 
    end
% end

fac = exp(-1i*K*dr);

Eout = fac*((ehr*(Rh*coEh))+(eti*(Rt*coEt))); 

% if blo == 0    % updated on 18.10.2011: multiplying the field and the R coeff. that takes into account the diffuse scattering power reduction
%     Eout = GRcoeff*Eout;    
% else 
    Eout = Rcoeff(blo)*Eout;
% end





    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

