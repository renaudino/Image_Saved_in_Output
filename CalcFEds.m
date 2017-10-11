function  CalcFEds()
% Diffuse scattering as first interaction

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.4

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Using 3D matrix instead of cell array; unify the input size of called functions 

global  emett DSN Ninterac FDS PDS ...
       NbrDSSlns vnfaces recept Area RP RF OutputDataFDS lambda ...
       TransmitType Lt ReceiveType Lr PSLN Mtrun Nbrimg DBIMAGES;
   
E0(1:3,1) = complex(0,0);
Ep(1:3,1) = complex(0,0);
Eds(1:3,1) = complex(0,0);


% temporary variables for the unify the input size of Masking and Blocking
Temp1=zeros(3,1);
Temp2=zeros(3,1);
Temp3=zeros(3,1);


RefFieldlx(1:3,1) = complex(0,0);
GroundN = [0;0;1];
p0 = zeros(1,5);
% oldReflex = 0;
FDS = [];
PDS = [];
Area = [];
SubLoop(-1,emett);
c = 0;

for l = 1:DSN

   if (Ninterac > 0)
        Mtrun(:,:,:)=0;
        Nbrimg(:) = 0;
        Nbrimg(1) = 1;

        p0(1:2) = FDS(l,:);
        p0(3:5) = PDS(l,:);
        Mtrun(1,1,:) = DBIMAGES;
        Mtrun(1,1,2:3) = p0(1:2);
        Mtrun(1,1,4:6) = p0(3:5);

        Construct(Ninterac);
        NbrDSSlns = zeros(Ninterac+1,1);
        for k = 1:Ninterac
            CalcPath(PDS(l,:),recept,k,l);
        end 
    end   
    
    PDS_re(:,1) = PDS(l,:);
    dv = recept-PDS_re;
    
    if (FDS(l,1) == 0)
        dirflag = dot(dv,GroundN);
    else
        vnfaces_re(:,1) = vnfaces(FDS(l,1),FDS(l,2),:);
        dirflag = dv'*vnfaces_re;
    end

   Temp3(:,1)=PDS(l,:);
   
    if (Blocking(recept,Temp3) == 1) || (dirflag <= 0)
        NbrDSSlns(1) = 0;
    else
        NbrDSSlns(1) = 1;
    end 
    
    for i = 1:(Ninterac+1)
        if (NbrDSSlns(i) > 0)
            RefFieldlx(1:3,1) = complex(0,0);
            if (TransmitType == 1)
                E0 = EincSAGE(PDS(l,:));
            elseif (TransmitType == 2)
                E0 = EincswWire(Lt,emett,PDS(l,:));
            elseif (TransmitType == 3)
                E0 = EmittPattern(PDS(l,:));
            elseif (TransmitType == 4)
                E0 = EmittCS(PDS(l,:));
            end     
            dt1 = 0;
            d1 = 0;
            
            Temp1(:,1)=emett;
            Temp2(:,1)=PDS(l,:);
            [mmask,me] = Masking(Temp1,Temp2);
            if mmask ~= 2
                me = struct('mask',mmask, ...
                    'npb',me.npb);
            end
            
            if (me.mask == 2)
                for a = 1:me.npb
                    if (me.pflag(a,1) == 1)
                        disp('Error: P1 cannot be a reflection point!');
                        exit; 
                    end 
                    if (me.pflag(a,1) == 0) || (me.pflag(a,1) == 3)
                        eh = me.shi(a,:)*E0;
                        et = me.sti(a,:)*E0;
                        Ep(:,1) = (me.sht(a,:)*(me.Thi(a)*eh))+(me.stt(a,:)*(me.Tti(a)*et));
                    end 
                    if (me.pflag(a,1) == 2)
                        Ep(:,1) = E0;
                    end 
                    if (me.pflag(a,2) == 0) || (me.pflag(a,2) == 6)
                        eh = me.shr(a,:)*Ep;
                        et = me.str(a,:)*Ep;
                        E0(:,1) = (me.sho(a,:)*(me.Tht(a)*eh))+(me.sto(a,:)*(me.Ttt(a)*et));
                    else 
                        E0(:,1) = Ep;
                    end
                        dt1 = dt1+((me.epd(a))-(me.pd(a)));
                end
            end
            
            for j = 1:NbrDSSlns(i)
                if (i == 1)
                    [Eds(:,1),dt] = dsfield(E0,emett,recept,FDS(l,:),PDS(l,:),Area(l));
                else
                    ds3 = reshape(RP(i,j,1,:),3,1);
                    [Eds(:,1),dt] = dsfield(E0,emett,ds3,FDS(l,:),PDS(l,:),Area(l));

                end
                ds = 0;
                if (i > 1)
                    RP_re(:,1) = RP(i,j,1,:);
                    PDS_re(:,1) = PDS(l,:);
                    vw = PDS_re-RP_re;
                    ds = ds+norm(vw);
                    for u = 1:(i-2)
                        vw(:,1) = RP(i,j,u,:)-RP(i,j,u+1,:);
                        dd = norm(vw);
                        ds = ds+dd;
                    end 
                    RP_re(:,1) = RP(i,j,i-1,:);
                    vw = RP_re-recept;
                    dd = norm(vw);
                    ds = ds+dd;
                else 
                    PDS_re(:,1) = PDS(l,:);
                    vw = PDS_re-recept;
                    dd = norm(vw);
                    ds = ds+dd;
                end 
                e(:,1) = PDS(l,:);
                Ein(:,1) = Eds;
                for v = 1:(i-1) 
                    Temp1(:,1)=e;
                    Temp2(:,1)=RP(i,j,v,:);
                    [mmask,mi] = Masking(Temp1,Temp2);
                    if mmask ~= 2
                        mi = struct('mask',mmask, ...
                            'npb',mi.npb);
                    end
                    
                    fb1 = -1;
                    if (mi.mask == 2)
                        for a = 1:mi.npb
                            if (mi.pflag(a,1) == 0) || (mi.pflag(a,1) == 3)
                                eh = mi.shi(a,:)*Ein;
                                et = mi.sti(a,:)*Ein;
                                Ep(:,1) = (mi.sht(a,:)*(mi.Thi(a)*eh))+(mi.stt(a,:)*(mi.Tti(a)*et));
                            else
                                Ep(:,1) = Ein;
                            end 
                            Ep(:,1) = mi.ploss(a)*Ep;
                            if (mi.pflag(a,2) == 0) || (mi.pflag(a,2) == 6)
                                eh = mi.shr(a,:)*Ep;
                                et = mi.str(a,:)*Ep;
                                Ein(:,1) = (mi.sho(a,:)*(mi.Tht(a)*eh))+(mi.sto(a,:)*(mi.Ttt(a)*et));
                            else 
                                Ein(:,1) = Ep;
                            end
                            if (mi.pflag(a,2) == 4)
                                fb1 = mi.nbpen(a);  
                            end 
                                d1 = d1+(mi.epd(a))-(mi.pd(a));
                        end
                    end
                    if (v == (i-1))
                        if (RF(i,j,v,1) == 0)                            
                            Re3 = reshape(e,3,1);
                            Re4 = reshape(recept,3,1);
                            Re5 = reshape(RP(i,j,v,:),1,1,1,3);
                            RefFieldlx(:,1) = RefField(fb1,0,Re3,Re4,Re5,GroundN,Ein);

                        else
                            Re2 = reshape(RF(i,j,v,1),1,1);
                            Re3 = reshape(e,3,1);
                            Re4 = reshape(recept,3,1);
                            Re5 = reshape(RP(i,j,v,:),1,1,1,3);
                            vn_temp = reshape(vnfaces(RF(i,j,v,1),RF(i,j,v,2),:),3,1);
                            RefFieldlx(:,1) = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);

                        end 
                    else
                        if (RF(i,j,v,1) == 0)
                            Re3 = reshape(e,3,1);
                            Re4 = reshape(RP(i,j,(l+1),:),3,1);
                            Re5 = reshape(RP(i,j,l,:),1,1,1,3);
                            RefFieldlx(:,1) = RefField(fb1,0,Re3,Re4,Re5,GroundN,Ein);

                        else
                            Re2 = reshape(RF(i,j,l,1),1,1);
                            Re3 = reshape(e,3,1);
                            Re4 = reshape(RP(i,j,(l+1),:),3,1);
                            Re5 = reshape(RP(i,j,l,:),1,1,1,3);
                            vn_temp = reshape(vnfaces(RF(i,j,l,1),RF(i,j,l,2),:),3,1);
                            RefFieldlx(:,1) = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);

                        end
                        e(:,1) = RP(i,j,v,:);
                    end 
                    Ein = RefFieldlx;        
                end
                
                if (i ~= 1)
                    Temp1(:,1)=RP(i,j,i-1,:);
                    Temp2(:,1)=recept;
                    [mmask,mr] = Masking(Temp1,Temp2);
                    if mmask ~= 2
                        mr = struct('mask',mmask, ...
                            'npb',mr.npb);
                    end
                else
                    Temp1(:,1)=PDS(l,:);
                    Temp2(:,1)=recept;
                    [mmask,mr] = Masking(Temp1,Temp2);
                    if mmask ~= 2
                        mr = struct('mask',mmask, ...
                            'npb',mr.npb);
                    end
                end
                
                if (mr.mask == 2)
                    for a = 1:mr.npb
                        if (mr.pflag(a,2) == 4)
                            disp('Error: P2 cannot be a reflection point!');
                            exit; 
                        end 
                        if (mr.pflag(a,1) == 0) || (mr.pflag(a,1) == 3)
                            eh = mr.shi(a,:)*Ein;
                            et = mr.sti(a,:)*Ein;
                            Ep(:,1) = (mr.sht(a,:)*(mr.Thi(a)*eh))+(mr.stt(a,:)*(mr.Tti(a)*et));
                        else
                            Ep(:,1) = Ein;
                        end
                        Ep(:,1) = mr.ploss(a)*Ep;
                        if (mr.pflag(a,2) == 0) || (mr.pflag(a,2) == 6)
                            eh = mr.shr(a,:)*Ep;
                            et = mr.str(a,:)*Ep;
                            Ein(:,1) = (mr.sho(a,:)*(mr.Tht(a)*eh))+(mr.sto(a,:)*(mr.Ttt(a)*et));
                        else 
                            Ein(:,1) = Ep;
                        end
                        d1 = d1+(mr.epd(a))-(mr.pd(a));
                    end
                end
                
                dt = dt+dt1;
                ds = ds+d1;
                spread = complex(1/(dt*ds)*(lambda/(4*pi)),0);
                Ein = spread*Ein;
                Efin = complex(0,0);
                
                if (i ~= 1)
                    if (ReceiveType == 1)
                         Efin = ReceSAGE(Ein,RP(i,j,i-1,:));
                    elseif (ReceiveType == 2)
                         Efin = ReceWire(Ein,RP(i,j,i-1,:),Lr);
                    elseif (ReceiveType == 3)
                         Efin = RecePattern(RP(i,j,i-1,:),Ein);
                    elseif (ReceiveType == 4)
                         Efin = ReceCS(Ein,RP(i,j,i-1,:));
                    end
                else
                    if (ReceiveType == 1)
                         Efin = ReceSAGE(Ein,PDS(l,:));
                    elseif (ReceiveType == 2)
                         Efin = ReceWire(Ein,PDS(l,:),Lr);
                    elseif (ReceiveType == 3)
                         Efin = RecePattern(PDS(l,:),Ein);
                    elseif (ReceiveType == 4)
                         Efin = ReceCS(Ein,PSLN(l,:));
                    end
                end
                d = dt+ds;
                Eout = Efin;
                c = c+1;
                if (i ~= 1)
                    OutputDataFDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),PDS(l,1),PDS(l,2),PDS(l,3),RP(i,j,i-1,1),...
                                         RP(i,j,i-1,2),RP(i,j,i-1,3),d,real(Eout),imag(Eout),4,1];
                    
                else
                    OutputDataFDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),PDS(l,1),PDS(l,2),PDS(l,3),PDS(l,1),...
                                         PDS(l,2),PDS(l,3),d,real(Eout),imag(Eout),4,1];
                   
                end                 
            end         
        end 
    end 
end 