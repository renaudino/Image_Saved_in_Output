function CalcLEds_Image_Olivier ()

% Diffuse scattering as last interaction

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.5

global Area DSFlag DSN emett eta FDS K lambda Lr Lt Mtrun Nblock Nbrimg Ninterac ...
       OutputDataLDS PDS ReceiveType recept TransmitType vnfaces wedges;

methM = 'Masking_Olivier_global';
methR = 'RefFieldUP';

E0(1:3,1)               = complex(0,0);
Ep(1:3,1)               = complex(0,0);
Eds(1:3,1)              = complex(0,0);

maxnumber               = max(Nbrimg(:));

% temporary variables for the unify the input size of Masking
Temp1                   = zeros(3,1);
Temp2                   = zeros(3,1);

curs                    = zeros(1,9);
right                   = zeros(1,9);
back                    = zeros(1,9);

RefFieldlx(1:3,1)       = complex(0,0);

ornum                   = 1;
c                       = 0;

for i = 1:Ninterac
    curs(1,:)           = Mtrun((i+2),ornum,:);
    right               = curs;
    
    while (right(1) ~= 0)  % if not empty, then continue
        bl              = right(1,2);
        fc              = right(1,3);
        
        if (DSFlag(bl) == 1)
            backre      = right(1,8:9);
            back(1,:)   = Mtrun(backre(1,1),backre(1,2),:);
            
            cntpt       = (wedges(bl,fc,1,:)+wedges(bl,fc,2,:)+wedges(bl,fc,3,:)+wedges(bl,fc,4,:))/4;
            
            bt1         = reshape(back(1,2:3),1,2);
            bt2         = reshape(back(1,4:6),3,1);
            bt3         = reshape(cntpt,3,1);
            
            pointR(:,1) = Breakthrough(bt1,bt2,bt3);
            
            DSN         = 0;
            
            pta_re      = reshape(wedges(bl,fc,1,:),3,1);
            ptb_re      = reshape(wedges(bl,fc,2,:),3,1);
            ptc_re      = reshape(wedges(bl,fc,3,:),3,1);
            ptd_re      = reshape(wedges(bl,fc,4,:),3,1);
            
            dsf         = reshape(right(1,2:3),2,1);
            ppt_re      = reshape(pointR,3,1);
            
            subdivision(0,pta_re,ptb_re,ptc_re,ptd_re,dsf,ppt_re);
            
            for j = 1:DSN
                m                   = 1;
                glob                = 0;
                rback               = back;
                
                while (rback(1,8:9) ~= 0)    %  check previous level
                    extrem(:,1)     = PDS(j,:);
                    trackface(m,:)  = rback(1,2:3);
                    
                    bt1             = reshape(rback(1,2:3),1,2);
                    bt2             = reshape(rback(1,4:6),3,1);
                    bt3             = reshape(extrem,3,1);
                    
                    pointV(:,1)     = Breakthrough(bt1,bt2,bt3);
                    
                    track(m,:)      = pointV;
                    difftest        = extrem-pointV;
                    
                    glob            = 1;
%                     if (rback(1,2) ~= 0)
                    vnfaces_re(:,1) = vnfaces(trackface(m,1),trackface(2),:);
                    if ((vnfaces_re'*difftest) <= 0)
                        glob        = 0;
                        break;
                    end
%                     end
                    vnfaces_re(:,1) = vnfaces(bl,fc,:);
                    if ((vnfaces_re'*difftest) >= 0)
                        glob        = 0;
                        break;
                    end
%                     if (rback(2) == 0)
%                         app = AppGround(pointV);
%                     else
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         app             = AppFace(pointV,rback(1,2:3).');
                        app             = AppFace2(pointV,squeeze(wedges(rback(2),rback(3),:,:)).');
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     end
                    if (app == 1)
                        cache = Blocking(extrem,pointV);
                        if (cache == 1)
                            glob = 0;
                            break;
                        end
                        fface(1) = rback(1,2);
                        if (fface(1) > 0)
                            for k = 1:6
                                if (k ~= rback(1,3))
                                    fface(2) = k;
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                     appf = AppFace(pointV,fface.');
                                    appf  = AppFace2(pointV,squeeze(wedges(fface(1),fface(2),:,:)).');
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                    if (appf == 1)
                                        glob = 0;
                                        break;
                                    end
                                end
                            end
                            if (abs(extrem-pointV) < 1.0e-12)
                                glob = 0;
                                break;
                            end
                        end
                    else
                        glob = 0;
                        break;
                    end
                    extrem(:,1) = pointV;
                    rback = Mtrun(rback(1,8),rback(1,9),:);
                    m = m+1;
                end
                if (glob == 1)
                    cache = Blocking(emett,pointV);
                    if (cache == 1)
                        glob = 0;
                    end
                end
                if (glob == 1)
                    dt = 0;
                    dt1 = 0;
                    flag = 0;
                    if (i > 1)
                        for u = 1:i-1
                            vw(:,1) = track(u+1,:)-track(u,:);
                            dd      = norm(vw);
                            dt      = dt+dd;
                        end
                    end
                    track_re        = reshape(track(i,:),3,1);
                    vw(:,1)         = track_re-emett;
                    dd              = norm(vw);
                    dt              = dt+dd;
                    
                    Temp1(:,1)      = emett;
                    Temp2(:,1)      = track_re;
                    
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    if strcmp(methM,'Masking')
                        [mmask,me] = Masking(Temp1,Temp2);
                        if (mmask ~= 2); me = struct('mask',mmask,'npb',me.npb); end
                    else
                        me = Masking_Olivier_global(Temp1,Temp2);
                        if isempty(me.pflag)
                            me = struct('mask',me.mask,'npb',me.npb);
                        end
                    end
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    
                    if (me.mask ~= 1)
                        if (TransmitType == 1)
                            E0 = EincSAGE(track(i,:));
                        elseif (TransmitType == 2)
                            E0 = EincswWire(Lt,emett,track(i,:));
                        elseif (TransmitType == 3)
                            E0 = EmittPattern(track(i,:));
                        elseif (TransmitType == 4)
                            E0 = EmittCS(track(i,:));
                        end
                        e = emett;
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
                                    Ep(:,1) = Ein;
                                end
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
                        Ein2 = Ein;
                        dr1 = 0;
                        for l = 1:i
                            if (l == i)
                                track_re = reshape(track(1,:),3,1);
                                PDS_re   = reshape(PDS(j,:),3,1);
                                
                                Temp1(:,1) = track_re;
                                Temp2(:,1) = PDS_re;
                                
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                if strcmp(methM,'Masking')
                                    [mmask,mi] = Masking(Temp1,Temp2);
                                    if (mmask ~= 2); mi = struct('mask',mmask,'npb',mi.npb); end
                                else
                                    mi = Masking_Olivier_global(Temp1,Temp2);
                                    if isempty(mi.pflag)
                                        mi = struct('mask',mi.mask,'npb',mi.npb);
                                    end
                                end
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                
                                if (mi.mask == 1)
                                    flag = 1;
                                    break;
                                end
%                                 if (trackface(1,1) == 0)
%                                     Re3 = reshape(e,3,1);
%                                     Re4 = reshape(PDS(j,:),3,1);
%                                     Re5 = reshape(track(1,:),1,1,1,3);
%                                     RefFieldlx(:,1) = RefField(fb1,0,Re3,Re4,Re5,GroundN,Ein2);
%                                 else
                                    Re2 = reshape(trackface(1,1),1,1);
                                    Re3 = reshape(e,3,1);
                                    Re4 = reshape(PDS(j,:),3,1);
                                    Re5 = reshape(track(1,:),1,1,1,3);
                                    vn_temp = reshape(vnfaces(trackface(1,1),trackface(1,2),:),3,1);
                                    
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                    if strcmp(methR,'RefField')
                                        [RefFieldlx(:,1),~,~] = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein2);
                                    else
                                        [RefFieldlx(:,1),~,~] = RefFieldUP(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein2);
                                    end
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                 end
                            else
                                track_1re = reshape(track(i-l+1,:),3,1);
                                track_2re = reshape(track(i-l,:),3,1);
                                
                                Temp1(:,1) = track_1re;
                                Temp2(:,1) = track_2re;
                                
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                if strcmp(methM,'Masking')
                                    [mmask,mi] = Masking(Temp1,Temp2);
                                    if (mmask ~= 2); mi = struct('mask',mmask,'npb',mi.npb); end
                                else
                                    mi = Masking_Olivier_global(Temp1,Temp2);
                                    if isempty(mi.pflag)
                                        mi = struct('mask',mi.mask,'npb',mi.npb);
                                    end
                                end
                                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                
                                if (mi.mask == 1)
                                    flag = 1;
                                    break;
                                end
%                                 if (trackface(i-l+1,1) == 0)
%                                     Re3 = reshape(e,3,1);
%                                     Re4 = reshape(track(i-l,:),3,1);
%                                     Re5 = reshape(track(i-l+1,:),1,1,1,3);
%                                     RefFieldlx(:,1) = RefField(fb1,0,Re3,Re4,Re5,GroundN,Ein2);
%                                 else
                                    Re2 = reshape(trackface(i-l+1,1),1,1);
                                    Re3 = reshape(e,3,1);
                                    Re4 = reshape(track(i-l,:),3,1);
                                    Re5 = reshape(track(i-l+1,:),1,1,1,3);
                                    vn_temp = reshape(vnfaces(trackface(i-l+1,1),trackface(i-l+1,2),:),3,1);
                                    
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                    if strcmp(methR,'RefField')
                                        [RefFieldlx(:,1),~,~] = RefField(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein2);
                                    else
                                        [RefFieldlx(:,1),~,~] = RefFieldUP(fb1,Re2,Re3,Re4,Re5,vn_temp,Ein2);
                                    end
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                        
%                                 end
                            end
                            e(:,1) = track(i-l+1,:);
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
                                        dr1 = dr1+(mi.epd(a))-(mi.pd(a));
                                    end
                                end
                            end
                            Ein2 = RefFieldlx;
                        end
                        d1 = 0;
                        if (flag ~= 1)
                            PDS_re     = reshape(PDS(j,:),3,1);
                            
                            Temp1(:,1) = PDS_re;
                            Temp2(:,1) = recept;
                            
                            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                            if strcmp(methM,'Masking')
                                [mmask,mr] = Masking(Temp1,Temp2);
                                if (mmask ~= 2); mr = struct('mask',mmask,'npb',mr.npb); end
                            else
                                mr = Masking_Olivier_global(Temp1,Temp2);
                                if isempty(mr.pflag)
                                    mr = struct('mask',mr.mask,'npb',mr.npb);
                                end
                            end
                            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                            
                            if (mr.mask ~= 1)
                                ds2 = reshape(track(1,:),3,1);
                                [Eds(:,1),dr] = dsfield(Ein2,ds2,recept,FDS(j,:),PDS(j,:),Area(j));
                                flagds = 0;
                                dr = dr+dt+dt1+dr1;
                                spread = complex(lambda/(4*pi*dr),0);
                                Eds(:,1) = spread*Eds;
                                if (mr.mask == 2)
                                    for a = 1:mr.npb
                                        if (mr.pflag(a,2) == 4)
                                            disp('Error: P2 cannot be a reflection point!');
                                            exit;
                                        end
                                        if (mr.pflag(a,1) == 0) || (mr.pflag(a,1) == 3)
                                            eh = mr.shi(a,:)*Eds;
                                            et = mr.sti(a,:)*Eds;
                                            Ep(:,1) = (mr.sht(a,:)*(mr.Thi(a)*eh))+(mr.stt(a,:)*(mr.Tti(a)*et));
                                        else
                                            if (mr.pflag(a,2) == 1)
                                                flagds = 1;
                                                break;
                                            end
                                            Ep(:,1) = Eds;
                                        end
                                        Ep(:,1) = mr.ploss(a)*Ep;
                                        if (mr.pflag(a,2) == 0) || (mr.pflag(a,2) == 6)
                                            eh = mr.shr(a,:)*Ep;
                                            et = mr.str(a,:)*Ep;
                                            Eds(:,1) = (mr.sho(a,:)*(mr.Tht(a)*eh))+(mr.sto(a,:)*(mr.Ttt(a)*et));
                                        else
                                            Eds(:,1) = Ep;
                                        end
                                        d1 = d1+(mr.epd(a))-(mr.pd(a));
                                    end
                                end
                                
                                if (flagds ~= 1)
                                    PDS_re = reshape(PDS(j,:),3,1);
                                    vw = recept-PDS_re;
                                    dd = norm(vw);
                                    spread = complex(1/(dd+d1),0);
                                    Eds = spread*Eds;
                                    dr = dr+dd+d1;
                                    if (ReceiveType == 1)
                                        Efin = ReceSAGE(Eds,PDS(j,:));
                                    elseif (ReceiveType == 2)
                                        Efin = ReceWire(Eds,PDS(j,:),Lr);
                                    elseif (ReceiveType == 3)
                                        Efin = RecePattern(PDS(j,:),Eds);
                                    elseif (ReceiveType == 4)
                                        Efin = ReceCS(Eds,PDS(j,:));
                                    end
                                    Eout = Efin;
                                    c = c+1;
                                    OutputDataLDS(c,:) = [emett(1),emett(2),emett(3),recept(1),recept(2),recept(3),dr,real(Eout),imag(Eout),3,1,...
                                        track(i,1),track(i,2),track(i,3),zeros(1,4*3),zeros(1,5*3),zeros(1,5*4)];
                                end
                            end
                        end
                    end
                end
            end
        end
        ornum          = ornum+1;
        
        if (ornum <= maxnumber)
            right(1,:) = Mtrun((i+2),ornum,:);
        else
            break;
        end
        
    end
end