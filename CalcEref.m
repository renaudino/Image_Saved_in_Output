function  CalcEref()
% Reflected field component

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.27
%          2011.9.29 update after finishing the masking function

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Remove CalcPath

global Nreflx Reflex TransmitType ReceiveType recept vnfaces emett NbrSlns...
       PSLN FSLN lambda OutputDataRef Lt Lr EFMAX;
   

% temporary variables for the unify the input size of Masking
Temp1=zeros(3,1);
Temp2=zeros(3,1);

E0(1:3,1) = complex(0,0);
Ep(1:3,1) = complex(0,0);
GroundN = [0;0;1];
c = 0;

if (Reflex == 0)
    Eout = complex(0,0);
end

RefFieldlx(1:3,1) = complex(0,0);

if (Reflex == 1)
    for i = 1 : Nreflx
        if (NbrSlns(i) > 0)    % 'NbrSlns' is the number of reflection in certain order
            for j = 1 : NbrSlns(i)
                dt = 0;
                dt1 = 0;
                flag = 0;
                if (i > 1)
                    for u = 1:(i-1)
                        vw(:,1) = PSLN(i,j,u,:) - PSLN(i,j,(u+1),:);
                        dd = norm(vw);
                        dt = dt + dd;
                    end 
                end 
                PSLN_re(:,1) = PSLN(i,j,1,:);
                vw = PSLN_re(:,1) - emett;
                dd = norm(vw);
                dt = dt + dd;
                PSLN_re(:,1) = PSLN(i,j,i,:);
                vw = PSLN_re(:,1) - recept;
                dd = norm(vw);
                dt = dd + dt;
                
                Temp1(:,1)=emett(:,1);
                Temp2(:,1)=PSLN(i,j,1,:);
                [mmask,me] = Masking(Temp1,Temp2);
                if mmask ~= 2
                    me = struct('mask',mmask, ...
                        'npb',me.npb);               
                end

                if (me.mask ~= 1)   
                    if (TransmitType == 1)
                        E0 = EincSAGE(PSLN(i,j,1,:));
                    elseif (TransmitType == 2)
                        E0 = EincswWire(Lt,emett,PSLN(i,j,1,:));
                    elseif (TransmitType == 3)
                        E0 = EmittPattern(PSLN(i,j,1,:));
                    elseif (TransmitType == 4)
                        E0 = EmittCS(PSLN(i,j,1,:));
                    end 
                    e(:,1) = emett;
                    Ein = E0;
                    fb1 = -1;
                    if (me.mask == 2)
                        for a = 1:me.npb
                            if (me.pflag(a,1) == 1)
                                disp('Error: P1 cannot be a reflection point!');
                                exit; 
                            end 
                            if (me.pflag(a,1) == 0) || (me.pflag(a,1) == 3)
                                eh = me.shi(a,:)*Ein;
                                et = me.sti(a,:)*Ein;
                                Ep(:,1) = (me.sht(a,:)*(me.Thi(a)*eh))+(me.stt(a,:)*(me.Tti(a)*et));
                            end 
                            if (me.pflag(a,1) == 2)
                                Ep = Ein;
                            end 
                            Ep(:,1) = me.ploss(a)*Ep;
                            if (me.pflag(a,2) == 0) || (me.pflag(a,2) == 6)
                                eh = me.shr(a,:)*Ep;
                                et = me.str(a,:)*Ep;
                                Ein(:,1) = (me.sho(a,:)*(me.Tht(a)*eh))+(me.sto(a,:)*(me.Ttt(a)*et));
                            else 
                                Ein(:,1) = Ep;
                            end
                            if (me.pflag(a,2) == 4)
                                fb1 = me.nbpen(a);
                            end 
                            dt1 = dt1+((me.epd(a))-(me.pd(a)));
                        end
                    end 
                    for l = 1:i
                        if (l == i)   % the last reflection
                            if (FSLN(i,j,l,1) == 0)
                                Re3 = reshape(e,3,1);
                                Re4 = reshape(recept,3,1);
                                Re5 = reshape(PSLN(i,j,l,:),1,1,1,3);
                                vn_temp = reshape(GroundN,3,1);
                                RefFieldlx = RefField(fb1,0,Re3,Re4,Re5,vn_temp,Ein);
%                               RefFieldlx = RefField(fb1,0,e,recept,PSLN(i,j,l,:),GroundN,Ein);
                            else 
                                Re2 = reshape(FSLN(i,j,l,1),1,1);
                                Re3 = reshape(e,3,1);
                                Re4 = reshape(recept,3,1);
                                Re5 = reshape(PSLN(i,j,l,:),1,1,1,3);
                                vn_temp = reshape(vnfaces(FSLN(i,j,l,1),FSLN(i,j,l,2),:),3,1);
                                RefFieldlx = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);
%                               RefFieldlx = RefField(fb1,FSLN(i,j,l,1),e,recept,PSLN(i,j,l,:),vnfaces(FSLN(i,j,l,1),FSLN(i,j,l,2),:),Ein);
                            end 
                        else    % not the last reflection
                            Temp1(:,1)=PSLN(i,j,l,:);
                            Temp2(:,1)=PSLN(i,j,(l+1),:);
                            [mmask,mi] = Masking(Temp1,Temp2);
                            if mmask ~= 2
                                mi = struct('mask',mmask, ...
                                    'npb',mi.npb);
                            end
                            
                            if (mi.mask == 1)
                                flag = 1;
                                break;
                            end 
                            if (FSLN(i,j,l,1) == 0)
                                Re3 = reshape(e,3,1);
                                Re4 = reshape(PSLN(i,j,l+1,:),3,1);
                                Re5 = reshape(PSLN(i,j,l,:),1,1,1,3);
                                RefFieldlx = RefField(fb1,0,Re3,Re4,Re5,GroundN,Ein);
%                               RefFieldlx = RefField(fb1,0,e,PSLN(i,j,l+1,:),PSLN(i,j,l,:),GroundN,Ein);
                            else
                                Re2 = reshape(FSLN(i,j,l,1),1,1);
                                Re3 = reshape(e,3,1);
                                Re4 = reshape(PSLN(i,j,l+1,:),3,1);
                                Re5 = reshape(PSLN(i,j,l,:),1,1,1,3);
                                vn_temp = reshape(vnfaces(FSLN(i,j,l,1),FSLN(i,j,l,2),:),3,1);
                                RefFieldlx = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);
%                               RefFieldlx = RefField(fb1,FSLN(i,j,l,1),e,PSLN(i,j,l+1,:),PSLN(i,j,l,:),vnfaces(FSLN(i,j,l,1),FSLN(i,j,l,2),:),Ein);
                            end
                            e(:,1) = PSLN(i,j,l,:);
                            if (l ~= i)
                                fb1 = -1;
                                if (mi.mask == 2)
                                    for a = 1:mi.npb
                                        if (mi.pflag(a,1) == 0) || (mi.pflag(a,1) == 3)
                                            eh = mi.shi(a,:)*RefFieldlx;
                                            et = mi.sti(a,:)*RefFieldlx;
                                            Ep(:,1) = (mi.sht(a,:)*(mi.Thi(a)*eh))+(mi.stt(a,:)*(mi.Tti(a)*et));
                                        else
                                            Ep(:,1) = RefFieldlx;
                                        end 
                                        Ep(:,1) = mi.ploss(a)*Ep;
                                        if (mi.pflag(a,2) == 0) || (mi.pflag(a,2) == 6)
                                            eh = mi.shr(a,:)*Ep;
                                            et = mi.str(a,:)*Ep;
                                            RefFieldlx(:,1) = (mi.sho(a,:)*(mi.Tht(a)*eh))+(mi.sto(a,:)*(mi.Ttt(a)*et));
                                        else 
                                            RefFieldlx(:,1) = Ep;
                                        end
                                        if (mi.pflag(a,2) == 4)
                                            fb1 = mi.nbpen(a);  
                                        end 
                                        dt1 = dt1+(mi.epd(a))-(mi.pd(a));
                                     end
                                 end
                            end         
                            Ein = RefFieldlx;
                        end                   
                    end 
                
                    if (flag ~= 1)
                        Temp1(:,1)=PSLN(i,j,i,:);
                        Temp2(:,1)=recept;
                        [mmask,mr] = Masking(Temp1,Temp2);
                        if mmask ~= 2
                            mr = struct('mask',mmask, ...
                                'npb',mr.npb);
                        end
                        
                        if (mr.mask ~= 1)
                            if(mr.mask == 2)
                                for a = 1:mr.npb
                                    if (mr.pflag(a,2) == 4)
                                        disp('Error: P2 cannot be a reflection point!');
                                        exit; 
                                    end 
                                    if (mr.pflag(a,1) == 0) || (mr.pflag(a,1) == 3)
                                        eh = mr.shi(a,:)*RefFieldlx;
                                        et = mr.sti(a,:)*RefFieldlx;
                                        Ep(:,1) = (mr.sht(a,:)*(mr.Thi(a)*eh))+(mr.stt(a,:)*(mr.Tti(a)*et));
                                    else
                                        Ep(:,1) = RefFieldlx;
                                    end
                                    Ep(:,1) = mr.ploss(a)*Ep;
                                    if (mr.pflag(a,2) == 0) || (mr.pflag(a,2) == 6)
                                        eh = mr.shr(a,:)*Ep;
                                        et = mr.str(a,:)*Ep;
                                        RefFieldlx(:,1) = (mr.sho(a,:)*(mr.Tht(a)*eh))+(mr.sto(a,:)*(mr.Ttt(a)*et));
                                    else 
                                        RefFieldlx(:,1) = Ep;
                                    end
                                    dt1 = dt1+(mr.epd(a))-(mr.pd(a));
                                end 
                            end
                            dt = dt+dt1;     
                            spread = complex(1/dt*(lambda/(4*pi)),0);
                            RefFieldlx = spread*RefFieldlx;
                            if (ReceiveType == 1)
                                Efin = ReceSAGE(RefFieldlx,PSLN(i,j,i,:));
                            elseif (ReceiveType == 2)
                                Efin = ReceWire(RefFieldlx,PSLN(i,j,i,:),Lr);
                            elseif (ReceiveType == 3)
                                Efin = RecePattern(PSLN(i,j,i,:),RefFieldlx);
                            elseif (ReceiveType == 4)
                                Efin = ReceCS(RefFieldlx,PSLN(i,j,i,:));
                            end
                            Eout = Efin;
                            c = c+1;
                            if (abs(Efin) > EFMAX)
                                EFMAX = abs(Efin);
                            end 
                            OutputDataRef(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),PSLN(i,j,1,1),PSLN(i,j,1,2),PSLN(i,j,1,3),PSLN(i,j,i,1),...
                                                  PSLN(i,j,i,2),PSLN(i,j,i,3),dt,real(Eout),imag(Eout),1,i];    
                        end 
                    end 
                end
            end 
        end 
    end
end


    
    