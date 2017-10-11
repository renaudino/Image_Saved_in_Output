function [FSLN, PSLN, Reflex, RF, RP, NbrDSSlns, NbrSlns] = CalcPath2 (tx, rx, ordmax, rvsds, FSLN, ...
                                                                           PSLN, RF, RP, NbrDSSlns, NbrSlns)
% function CalcPath(tx,rx,ordmax,rvsds)

% #codegen
% Calculates the path followed by a ray, i.e. the reflection points
% 
% Authors: Francesco Mani <francesco.mani@uclouvain.be>
%          Mingming Gan   <gan@ftw.at>
% 
% History: 2011.09.26
%          2011.10.04 -> updated after learning the diffuse scattering

global vnfaces wedges trun2;

% Nblock  = p.Nblock;
% vnfaces = p.vnfaces;
% wedges  = p.wedges;
% 
% MSKFlag = p.MSKFlag;
% CEP     = p.CEP;

ornum = 1;
pass  = 1;
count = 0;

fface = zeros(2,1);
ind   = find(trun2(:,7) == ordmax);
curs  = trun2(ind(ornum),:);
right = curs;

persistent oldReflex;

if isempty(oldReflex)
    oldReflex = 0;
end
Reflex     = 0;

% Atemp      = zeros(3);

track      = zeros(10,3);
trackface  = zeros(10,2);

vnfaces_re = zeros(3,1);
pointV     = zeros(3,1);

while (isempty(right) ~= 1)
    back = right;
    extrem = rx;
    glob = 1;
    m = 1;
    
    while (back(1) ~= 0)
        bt1 = reshape(back(2:3),1,2);
        bt2 = reshape(back(4:6),3,1);
        bt3 = reshape(extrem,3,1);
        pointV(:,1) = Breakthrough(bt1,bt2,bt3);
%         pointV         = Breakthrough(back(2:3).',back(4:6).',extrem);
        track(m,:)     = pointV; % coordinates of reflection point
        trackface(m,:) = back(2:3);
        
        difftest = extrem-pointV;
%         if (back(2) ~= 0)
            vnfaces_re(:) = vnfaces(trackface(m,1),trackface(m,2),:);
            if ((vnfaces_re'*difftest) <= 0) %(dot(vnfaces_re,difftest) <= 0)
                glob = 0;
                break;
            end
%         end
        
%         if (back(2) == 0)
%             app      = AppGround(pointV,p);
%         else
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%             Atemp(:) = wedges(back(2),back(3),[1 2 4],:);
%             app      = AppFace(pointV,Atemp);
            app      = AppFace2(pointV,squeeze(wedges(back(2),back(3),:,:)).');
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%         end
        
        if (app == 1)
            cache = Blocking(extrem,pointV);
            if (cache == 1)
                glob = 0; break;
            end
            
            fface(1) = back(2);
            if (fface(1) > 0)
                for j = 1:6
                    if (j ~= back(3))
                        fface(2) = j;
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         Atemp(:) = wedges(fface(1),fface(2),[1 2 4],:);
%                         appf = AppFace(pointV,Atemp);
                        appf = AppFace2(pointV,squeeze(wedges(fface(1),fface(2),:,:)).');
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                        if (appf == 1)
                            glob = 0; break;
                        end
                    end
                end
                
                if (sum(abs(extrem-pointV) < 1e-12) == length(extrem)) %(abs(extrem-pointV) < 1.0e-12)
                    glob = 0; break;
                end
            end
        else
            glob = 0;
            break;
        end
        extrem(:,1) = pointV;
        back = trun2(back(1),:);
        m = m+1; % means that the path found is okay, then go to the next level
    end
    
    if (glob == 1)
        cache = Blocking(tx(:),pointV(:));
        if (cache == 1)
            glob = 0;
        end
    end
    if (glob == 1)
        Reflex = 1;
%         if (rvsds == 0) % (OR): commented -> 28.04.2017
        if ~all(rvsds)
            NbrSlns(ordmax) = pass;
            for i = 1:m-1
                PSLN(ordmax,pass,i,:) = track(m-i,:);
                FSLN(ordmax,pass,i,:) = trackface(m-i,:);
            end
            pass = pass+1;
            count = count+1;
        else
            NbrDSSlns(ordmax+1) = pass;
            for i = 1:m-1
                RF(ordmax+1,pass,i,:) = trackface(m-i,:);
                RP(ordmax+1,pass,i,:) = track(m-i,:);
            end
            pass  = pass+1;
            count = count+1;
        end
    end
    ornum = ornum+1;
    if (ornum <= length(ind))
        right = trun2(ind(ornum),:);
    else
        break;
    end
end
if (Reflex == 0)
%     if (rvsds == 0) % (OR): commented -> 28.04.2017
    if ~all(rvsds)
        NbrSlns(ordmax) = 0;
    else
        NbrDSSlns(ordmax) = 0;
    end
end
if (count ~= 0) || (oldReflex == 1) || (Reflex == 1)
    Reflex = 1;
else
%     if (rvsds == 0) % (OR): commented -> 28.04.2017
    if ~all(rvsds)
        NbrSlns(ordmax) = 0;
    else
        NbrDSSlns(ordmax) = 0;
    end
end
oldReflex = Reflex;