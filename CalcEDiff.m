function CalcEDiff()
% Diffraction field component
% only consider the 1st order diffraction

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.7

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global emett recept vnfaces DiffPSLN DiffASLN DiffNFSLN DiffFSLN lambda ...
       OutputDataDiff TransmitType Lt ReceiveType Lr EFMAX;

Einc(1:3,1) = complex(0,0);
Ediff(1:3,1) = complex(0,0);
Ep(1:3,1) = complex(0,0);
n = VisibleEdges();
NdiffPath = CalcDiffPt(n);
c = 0;

% temporary variables for the unify the input size of Masking
Temp1=zeros(3,1);
Temp2=zeros(3,1);


for i = 1:NdiffPath
    df = 0;
    flag = 0;
    Temp1(:,1)=emett;
    Temp2(:,1)=DiffPSLN(i,:);
    [mmask,me] = Masking(Temp1,Temp2);
    if mmask ~= 2
        me = struct('mask',mmask, ...
               'npb',me.npb);
    end
    
    Temp1(:,1)=DiffPSLN(i,:);
    Temp2(:,1)=recept(:,1);
    [mmask,mr] = Masking(Temp1,Temp2);
    if mmask ~= 2
        mr = struct('mask',mmask, ...
               'npb',mr.npb);
    end
   
    if ((me.mask ~= 1) && (mr.mask ~= 1))
        if (TransmitType == 1)
             Einc = EincSAGE(DiffPSLN(i,:));
        elseif (TransmitType == 2)
             Einc = EincswWire(Lt,emett,DiffPSLN(i,:));
        elseif (TransmitType == 3)
             Einc = EmittPattern(DiffPSLN(i,:));
        elseif (TransmitType == 4)
  		     Einc = EmittCS(DiffPSLN(i,:));
        end 
        DiffPSLN_re(:,1) = DiffPSLN(i,:);
        ep = emett-DiffPSLN_re;
        dt1 = norm(ep);
        ep = recept-DiffPSLN_re;
        dt = sqrt(dt1*norm(ep)*(dt1+norm(ep)));    % reference the equation (2.19) in Claude's PHD thesis
        
        if (me.mask == 2)
            for l = 1:me.npb
                if ((me.pflag(l,1) ~= 1) && (me.pflag(l,2) ~= 4))
                    if (me.pflag(l,1) == 0) || (me.pflag(l,1) == 3)
                        eh = me.shi(l,:)*Einc;
                        et = me.sti(l,:)*Einc;
                        Ep(:,1) = (me.sht(l,:)*(me.Thi(l)*eh))+(me.stt(l,:)*(me.Tti(l)*et));
                    end 
                    if (me.pflag(l,1) == 2)
                        Ep = Einc;
                    end 
                    Ep(:,1) = me.ploss(l)*Ep;
                    if (me.pflag(l,2) == 0) || (me.pflag(l,2) == 6)
                        eh = me.shr(l,:)*Ep;
                        et = me.str(l,:)*Ep;
                        Einc(:,1) = (me.sho(l,:)*(me.Tht(l)*eh))+(me.sto(l,:)*(me.Ttt(l)*et));
                    else 
                        Einc(:,1) = Ep;
                    end
                else
                    flag = 1;
                    break;
                end 
                    df= df+((me.epd(l))-(me.pd(l)));
            end
        end
        if (flag ~= 1)
            Ediff(:,1) = DiffField(DiffFSLN(i,1),emett,DiffPSLN(i,:),recept,vnfaces(DiffFSLN(i,1),DiffFSLN(i,2),:),vnfaces(DiffNFSLN(i,1),DiffNFSLN(i,2),:),DiffASLN(i,:),Einc);
            if (mr.mask == 2)
                for l = 1:mr.npb
                    if ((mr.pflag(l,1) ~= 1) && (mr.pflag(l,2) ~= 4))
                        if (mr.pflag(l,1) == 0) || (mr.pflag(l,1) == 3)
                            eh = mr.shi(l,:)*Ediff;
                            et = mr.sti(l,:)*Ediff;
                            Ep(:,1) = (mr.sht(l,:)*(mr.Thi(l)*eh))+(mr.stt(l,:)*(mr.Tti(l)*et));
                        end 
                        if (mr.pflag(l,1) == 2)
                            Ep = Einc;
                        end 
                        Ep(:,1) = mr.ploss(l)*Ep;
                        if (mr.pflag(l,2) == 0) || (mr.pflag(l,2) == 6)
                            eh = mr.shr(l,:)*Ep;
                            et = mr.str(l,:)*Ep;
                            Ediff(:,1) = (mr.sho(l,:)*(mr.Tht(l)*eh))+(mr.sto(l,:)*(mr.Ttt(l)*et));
                        else 
                            Ediff(:,1) = Ep;
                        end
                    else
                        flag = 1;
                        break;
                    end 
                        df= df+((mr.epd(l))-(mr.pd(l)));
                end
            end
            if (flag ~= 1)
                lambda1 = lambda*(dt1+norm(ep))/(df+(dt1+norm(ep)));
                spread = complex ((1/dt)*lambda1/(4*pi),0);
                Ediff = spread*Ediff;
                if (ReceiveType == 1)
                     Eo = ReceSAGE(Ediff,DiffPSLN(i,:));
                elseif (ReceiveType == 2)
                     Eo = ReceWire(Ediff,DiffPSLN(i,:),Lr);
                elseif (ReceiveType == 3)
                     Eo = RecePattern(DiffPSLN(i,:),Ediff);
                elseif (ReceiveType == 4)
                     Eo = ReceCS(Ediff,DiffPSLN(i,:));
                end
                df = df+(dt1+norm(ep));
                Eout = Eo;
                if (abs(Eo) > EFMAX)
                    EFMAX = abs(Eo);
                end 
                c = c+1;
                OutputDataDiff(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),DiffPSLN(i,1),DiffPSLN(i,2),DiffPSLN(i,3),DiffPSLN(i,1),...
                                       DiffPSLN(i,2),DiffPSLN(i,3),df,real(Eout),imag(Eout),2,1];
            end 
        end
    end 
end 