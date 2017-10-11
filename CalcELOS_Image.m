function Eout = CalcELOS_Image()
% Line-of-sight field component

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.27
global emett recept TransmitType Lt Lr lambda EFMAX OutputDataLos ReceiveType;

Eo(1:3,1) = complex(0,0);
Ep(1:3,1) = complex(0,0);
dt = 0;

% temporary variables for the unify the input size of Masking
Temp1=zeros(3,1);
Temp2=zeros(3,1);

bk = Blocking(emett,recept);

if (bk ~= 1)
    Temp1(:,1)=emett(:,1);
    Temp2(:,1)=recept(:,1);
    %     los = Masking(Temp1,Temp2);
    [mmask,los] = Masking(Temp1,Temp2);
    
    if mmask ~= 2
        los = struct('mask',mmask, ...
            'npb',los.npb);
    end
    
    if ((los.mask) ~= 1)
        if (TransmitType == 1)
            Eo = EincSAGE(recept);
        elseif (TransmitType == 2)
            Eo = EincswWire(Lt,emett,recept);
        elseif (TransmitType == 3)
            Eo = EmittPattern(recept);
        elseif (TransmitType == 4)
            Eo = EmittCS(recept);
        end
        
        if (los.mask == 2)
            for i = 1:los.npb
                if (los.pflag(i,2) == 4) || (los.pflag(i,1) == 1)
                    disp('Error: LOS - P1 and P2 cannot be the reflection points!');
                    exit;
                end
                if (los.pflag(i,1) == 0) || (los.pflag(i,1) == 3)
                    eh = los.shi(i,:)*Eo;
                    et = los.sti(i,:)*Eo;
                    Ep(:,1) = (los.sht(i,:)*(los.Thi(i)*eh))+(los.stt(i,:)*(los.Tti(i)*et));
                end
                if (los.pflag(i,1) == 2)
                    Ep = Eo;
                end
                Ep(:,1) = los.ploss(i)*Ep;
                if (los.pflag(i,2) == 0) || (los.pflag(i,2) == 6)
                    eh = los.shr(i,:)*Ep;
                    et = los.str(i,:)*Ep;
                    Eo(:,1) = (los.sho(i,:)*(los.Tht(i)*eh))+(los.sto(i,:)*(los.Ttt(i)*et));
                else
                    Eo(:,1) = Ep;
                end
                dt = dt+(los.epd(i))-los.pd(i);
            end
        end
        er = recept - emett;
        dAtt = norm(er);
        dAtt = dAtt + dt;
        spread = complex(1.0/dAtt*(lambda/(4*pi)),0);
        Eo = spread*Eo;
        
        if (ReceiveType == 1)
            Eout = ReceSAGE(Eo,emett);
        elseif (ReceiveType == 2)
            Eout = ReceWire(Eo,emett,Lr);
        elseif (ReceiveType == 3)
            Eout = RecePattern(emett,Eo);
        elseif (ReceiveType == 4)
            Eout = ReceCS(Eo,emett);
        end
        
        if (abs(Eout) > EFMAX)
            EFMAX = abs(Eout);
        end
        % '5' is corresponding to the maximum refelction order we considered in ray traing tool
        OutputDataLos(1,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),dAtt,real(Eout),imag(Eout),0,0,...
            zeros(1,5*3),zeros(1,5*3),zeros(1,5*4)];
    end
else
    Eout = complex(0,0);
    OutputDataLos(1,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),dAtt,real(Eout),imag(Eout),0,0,...
        zeros(1,5*3),zeros(1,5*3),zeros(1,5*4)];
end

