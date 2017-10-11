function CalcFEds2 ()

% Diffuse scattering as first interaction
% 
% Authors: Francesco Mani <francesco.mani@uclouvain.be>
%          Mingming Gan   <gan@ftw.at>
% 
% History: 2011.10.04

methR = 'RefFieldUP';

global OutputDataFDS Ninterac vnfaces lambda TransmitType ReceiveType Lt Lr ...
    Nreflx recept emett;

E0(1:3,1)  = complex(0,0);
Ep(1:3,1)  = complex(0,0);
Eds(1:3,1) = complex(0,0);

RefFieldlx(1:3,1) = complex(0,0);

% GroundN = [0 ; 0 ; 1];

p0 = zeros(1,7);

Area          = zeros(1,100000); % (OR): size of the tiles (16.11.2016)
FDS           = zeros(100000,2); % (OR): tile index (16.11.2016)
PDS           = zeros(100000,3); % (OR): coordinates of tile centers (16.11.2016)
% OutputDataFDS = []; %zeros(50000,31);

[DSN,PDS,FDS,Area] = scatterers(-1,emett,PDS,FDS,Area);

% FSLN = zeros(Nreflx,100,Nreflx,2);
% PSLN = zeros(Nreflx,100,Nreflx,3);
FSLN = zeros(Nreflx,1e4,Nreflx,2);
PSLN = zeros(Nreflx,1e4,Nreflx,3);

% RF = zeros(Nreflx,100,Nreflx,2);
% RP = zeros(Nreflx,100,Nreflx,3);
RF = zeros(Nreflx,1e4,Nreflx,2);
RP = zeros(Nreflx,1e4,Nreflx,3);

NbrSlns = zeros(Nreflx,1);
temp    = zeros(3,1);

c = 0;
for l = 1:DSN
    if (Ninterac > 0)
        p0(2:3) = FDS(l,:);
        p0(4:6) = PDS(l,:);
        
        Construct2(Ninterac);
        NbrDSSlns = zeros(Ninterac+1,1);
        for k = 1:Ninterac
            [~,~,~,RF,RP,NbrDSSlns,~] = CalcPath2(PDS(l,:).',recept,k,l,FSLN,PSLN,RF,RP,NbrDSSlns,NbrSlns);
        end
    end   
    PDS_re(:,1) = PDS(l,:);
    dv = recept-PDS_re;
%     if (FDS(l,1) == 0)
%         dirflag = dv'*GroundN; %dot(dv,GroundN);
%     else
        vnfaces_re(:,1) = vnfaces(FDS(l,1),FDS(l,2),:); %dot(dv,vnfaces_re);
        dirflag = dv'*vnfaces_re;
%     end
    if (Blocking(recept,PDS(l,:).') == 1) || (dirflag <= 0)
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
            temp(:) = PDS(l,:);
            
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%             me = Masking_Olivier(emett,temp,Nblock,eta,vnfaces,K,wedges);
            
            Temp1(:,1)      = emett;
            Temp2(:,1)      = temp;
            
            me = Masking_Olivier_global(Temp1,Temp2);
            if isempty(me.pflag)
                me = struct('mask',me.mask,'npb',me.npb);
            end
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            
            if (me.mask == 2)
                for a = 1:me.npb
                    if (me.pflag(a,1) == 1)
                        disp('   Error: P1 cannot be a reflection point!');
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
                        dt1 = dt1+(me.epd(a)-me.pd(a));
                end
            end
            
            for j = 1:NbrDSSlns(i)
                
                % (OR): to avoid having diffuse scattering and reflection points at the same position (-> added on 18.11.2016)
                if ((i == 1) && (sum(abs(recept-PDS(l,:).')) > 1e-2)) || ((i > 1) && (sum(abs(squeeze(RP(i,j,1,:))-PDS(l,:).')) > 1e-2))
                    if (i == 1)
                        [Eds(:,1),dt] = dsfield(E0,emett,recept,FDS(l,:),PDS(l,:),Area(l));
                    else
                        temp(:) = RP(i,j,1,:);
                        [Eds(:,1),dt] = dsfield(E0,emett,temp,FDS(l,:),PDS(l,:),Area(l));
                    end
                    
                    ds = 0;
                    if (i > 1)
                        RP_re(:,1)  = RP(i,j,1,:);
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
                        temp(:) = RP(i,j,v,:);
                        
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         mi = Masking_Olivier(e,temp,Nblock,eta,vnfaces,K,wedges);
                        
                        Temp1(:,1)      = e;
                        Temp2(:,1)      = temp;
                        
                        mi = Masking_Olivier_global(Temp1,Temp2);
                        if isempty(mi.pflag)
                            mi = struct('mask',mi.mask,'npb',mi.npb);
                        end
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                        
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
%                             if (RF(i,j,v,1) == 0)
%                                 RefFieldlx(:,1) = RefField(fb1,0,e,recept,RP(i,j,v,:),Ein,CEP,eta,K,Rcoeff);
%                             else
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                 RefFieldlx(:,1) = RefField(fb1,RF(i,j,v,1),e,recept,RP(i,j,v,:),vnfaces(RF(i,j,v,1),RF(i,j,v,2),:),Ein,CEP,eta,K,Rcoeff);
                                
                                Re2 = reshape(RF(i,j,v,1),1,1); % (OR): block number for which the reflected field is evaluated
                                Re3 = reshape(e,3,1); % (OR): position of the transmitter
                                Re4 = reshape(recept,3,1); % (OR): position of the receiver
                                Re5 = reshape(RP(i,j,v,:),1,1,1,3); % (OR): reflection point
                                vn_temp = reshape(vnfaces(RF(i,j,v,1),RF(i,j,v,2),:),3,1);
                                
                                if strcmp(methR,'RefField')
                                    [RefFieldlx(:,1),~,~] = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);
                                else
                                    [RefFieldlx(:,1),~,~] = RefFieldUP(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);
                                end
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                             end
                        else
%                             if (RF(i,j,v,1) == 0)
%                                 RefFieldlx(:,1) = RefField(fb1,0,e,RP(i,j,(l+1),:),RP(i,j,l,:),Ein,CEP,eta,K,Rcoeff);
%                             else
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                 RefFieldlx(:,1) = RefField(fb1,RF(i,j,l,1),e,RP(i,j,(l+1),:),RP(i,j,l,:),vnfaces(RF(i,j,l,1),RF(i,j,l,2),Ein),CEP,eta,K,Rcoeff);
                                
                                Re2 = reshape(RF(i,j,l,1),1,1); % (OR): block number for which the reflected field is evaluated
                                Re3 = reshape(e,3,1); % (OR): position of the transmitter
                                Re4 = reshape(RP(i,j,(l+1),:),3,1); % (OR): position of the receiver
                                Re5 = reshape(RP(i,j,l,:),1,1,1,3); % (OR): reflection point
                                vn_temp = reshape(vnfaces(RF(i,j,l,1),RF(i,j,l,2),:),3,1);
                                
                                if strcmp(methR,'RefField')
                                    [RefFieldlx(:,1),~,~] = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);
                                else
                                    [RefFieldlx(:,1),~,~] = RefFieldUP(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein);
                                end
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                             end
                            e(:,1) = RP(i,j,v,:);
                        end
                        Ein = RefFieldlx;
                    end
                    if (i ~= 1)
                        temp(:) = RP(i,j,i-1,:);
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         mr = Masking_Olivier(temp,recept,Nblock,eta,vnfaces,K,wedges);
                        
                        Temp1(:,1)      = temp;
                        Temp2(:,1)      = recept;
                        
                        mr = Masking_Olivier_global(Temp1,Temp2);
                        if isempty(mr.pflag)
                            mr = struct('mask',mr.mask,'npb',mr.npb);
                        end
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    else
                        temp(:) = PDS(l,:);
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         mr = Masking_Olivier(temp,recept,Nblock,eta,vnfaces,K,wedges);
                        
                        Temp1(:,1)      = temp;
                        Temp2(:,1)      = recept;
                        
                        mr = Masking_Olivier_global(Temp1,Temp2);
                        if isempty(mr.pflag)
                            mr = struct('mask',mr.mask,'npb',mr.npb);
                        end
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    end
                    if (mr.mask == 2)
                        for a = 1:mr.npb
                            if (mr.pflag(a,2) == 4)
                                disp('   Error: P2 cannot be a reflection point!');
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
                        OutputDataFDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),d,real(Eout),imag(Eout),4,1, ...
                            PDS(l,1),PDS(l,2),PDS(l,3),RP(i,j,i-1,1),RP(i,j,i-1,2),RP(i,j,i-1,3),zeros(1,3*3),zeros(1,5*3),zeros(1,5*4)];
                    else
                        OutputDataFDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),d,real(Eout),imag(Eout),4,1, ...
                            PDS(l,1),PDS(l,2),PDS(l,3),PDS(l,1),PDS(l,2),PDS(l,3),zeros(1,3*3),zeros(1,5*3),zeros(1,5*4)];
                    end
                    
%                     if (i ~= 1)
%                         OutputDataFDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),d,real(Eout),imag(Eout),4,1,...
%                             PDS(l,1),PDS(l,2),PDS(l,3),RP(i,j,i-1,1),RP(i,j,i-1,2),RP(i,j,i-1,3),zeros(1,3*3),zeros(1,5*3),zeros(1,5*4)];
%                     else
%                         OutputDataFDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),d,real(Eout),imag(Eout),4,0,...
%                             PDS(l,1),PDS(l,2),PDS(l,3),zeros(1,4*3),zeros(1,5*3),zeros(1,5*4)];
%                     end
                end
            end
        end
    end
end
OutputDataFDS(c+1:end,:) = [];