function [ir] = ReconstructIR2 (Outputdata, fc, BW, Mf)

method         = 'Xuhong';
% method         = 'Mingming';

%% 
f                     = fc+(floor(-(Mf-1)/2):floor((Mf-1)/2)).'/Mf*BW; % frequency points [Hz]
tau                   = (0:Mf-1).'/BW;                % delay bins [s]

%% 
tf                    = complex(zeros(Mf,1),zeros(Mf,1));
ir                    = complex(zeros(Mf,1),zeros(Mf,1));

for i = 1:size(Outputdata,1)
    if strcmp(method,'Xuhong')
        tf(:,1)       = tf(:,1)+complex(Outputdata(i,8),Outputdata(i,9)).*exp(-1j*2*pi*f*(Outputdata(i,7)/3e8));
    else
        tf(:,1)       = tf(:,1)+complex(Outputdata(i,20),Outputdata(i,21)).*exp(-1j*2*pi*f*(Outputdata(i,19)/3e8));
    end
end

for m = 1:Mf
    ir(:,1)           = ir(:,1)+tf(m,1)*exp(1j*2*pi*tau*f(m));
end
ir(:,1)               = ir(:,1)/Mf;