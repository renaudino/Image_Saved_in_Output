function EffConstruct_Image(OrdRef,tx,rvsds)
% Data construction

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.21

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Combine Construct and CalcPath, calculate valid reflection path without
% build whole image tree and using recursion: EffConstruct, EffPointsImages
% Mpath: 1~2 ----- face,  3~5 ----- point
      

global vnfaces recept Nblock Reflex NbrSlns NbrDSSlns oldReflex PSLN FSLN ISLN RP RF Mpath wedges;

x = 0;
app = 0;
cache = 0;
tempvalue = 0;
count = 0;
oldReflex = Reflex;

%--------------- unify variable size for code convertion -----------------%
% pass = ones(OrdRef,1);
pass = zeros(OrdRef,1);
leveltemp = zeros(1,Nblock*6,5);
pointVcheck = zeros(3,1);
extremcheck = zeros(3,1);
pointcheck = zeros(3,1);
facecheck = zeros(2,1);
Temp3 = zeros(3,1);

track = zeros(OrdRef+1,3);
trackface = zeros(OrdRef+1,2);
trackimage = zeros(OrdRef+1,3);
vnfaces_re = zeros(3,1);

pointV = zeros(3,1);
extrem = zeros(3,1);
% back = zeros(1,3);
fface = zeros(2,1);
numberuse = zeros(1,Nblock*6);
loopdomain = zeros(OrdRef+1,1);
%-------------------------------------------------------------------------%

loopdomain(1) = 1;  % only Tx in the first level

for i = 1:OrdRef   % build up the original image tree
    loopdomain(i+1) = EffPointsImages(i);  
end

extrem(:,1) = recept;
b = 1;  % flag
golevel = 2;
goflag = 0; % original image tree: 0    updated image tree: 1
jumplevel = OrdRef+1; % pointer. from which point to update the image tree
order = 1;

while (jumplevel > 1 && order == 1) % update the image tree until go back to Tx
    %% part 1
    % 1. Update the image tree until there are useful imagepoints in the last
    %    level, then go to part 2
    % 2. Calculate valid lower order (smaller than 'OrdRef') reflection path after updating image tree
    
    if OrdRef == 1  % if reflection order is 1, set order to 0, in order to jump out the loop
        order = 0;
    end
    
    while (b ==1)
        p = 0;
        while (golevel ~= OrdRef+1 && golevel > 1)
            
            if goflag ==1
                
                leveltemp = Mpath(golevel,2:end,:);  % remove the first used point, renew the tree from the second point on this level
                Mpath(golevel,:,:) = 0;
                Mpath(golevel,1:(Nblock*6-1),:) = leveltemp;
                
                Mpath(golevel+1:end,:,:) = 0;        % clear the last few levels for new imagepoints
                loopdomain(golevel+1:end) = 0;
                
                for m = golevel+1:OrdRef+1
                    loopdomain(m) = EffPointsImages(m-1);
                end
                
                loopdomain(golevel) = loopdomain(golevel)-1;
                
            end
            
            
            for n = golevel:OrdRef   % backtrack from the new point
                glob = 1;
                j = n;
                back = Mpath(n,1,:);
                extrem(:,1) = recept;
                m = 1;
                
                while (j ~=1 && glob == 1)
                    bt1 = reshape(back(1:2),1,2);    %  face
                    bt2 = reshape(back(3:5),3,1);    % point
                    bt3 = reshape(extrem,3,1);
                    pointV(:,1) = Breakthrough(bt1,bt2,bt3);
                    
                    track(m,:) = pointV;    % coordinates of reflection point
                    trackface(m,:) = back(1:2);    % face
                    trackimage(m,:) = back(3:5);   % image
                    difftest = extrem - pointV;
                    
%                     if (back(1) ~= 0)
                        vnfaces_re(:,1) = vnfaces(trackface(m,1),trackface(m,2),:);
                        
                        if ((vnfaces_re'*difftest) <= 0)
                            glob = 0;
                            break;
                        end
%                     end
                    
%                     if (back(1) == 0)
%                         app = AppGround(pointV);
%                     else
                        back_temp=back(1,1:2);
                        back_temp=back_temp';
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         app = AppFace(pointV,back_temp); % Attention AppFace input dimension match
                        app = AppFace2(pointV,squeeze(wedges(back_temp(1),back_temp(2),:,:)).');
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     end
                    
                    if (app == 1)
                        cache = Blocking(extrem,pointV);
                        if (cache == 1)
                            glob = 0;
                            break;
                        end
                        
                        fface(1) = back(1);   % index of the current block
                        
                        if (fface(1) > 0)
                            
                            for Nface = 1:6
                                if (Nface ~= back(2))
                                    fface(2) = Nface;
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                     appf = AppFace(pointV,fface);
                                    appf = AppFace2(pointV,squeeze(wedges(fface(1),fface(2),:,:)).');
                                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                                    
                                    if (appf == 1)
                                        glob = 0;
                                        break;
                                    end
                                end
                            end
                            tempvalue = norm(extrem - pointV);  % test
                            if (tempvalue < 1.0e-12)
                                
                                glob = 0;
                                break;
                            end
                        end
                        
                    else
                        glob = 0;
                        break;
                    end
                    
                    extrem(:,1) = pointV;
                    j = j-1;
                    back = Mpath(j,1,:); % the first point of upper level
                    m = m+1;    %  the reflection point is okay, go to the upper level
                    
                end    % while (j ~=0)
                
                
                if (glob == 1)
                    Temp3(:,1)=tx;
                    cache = Blocking(Temp3,pointV);   %  input of Blocking should be 3*1, so use tx'
                    
                    if (cache == 1)
                        glob = 0;
                    end
                end
                if (glob == 1)
                    Reflex = 1;
                    if (rvsds == 0)
                        pass(n-1) = pass(n-1) + 1; % test
                        NbrSlns(n-1) = pass(n-1);
                        for i = 1:(m-1)
                            PSLN(n-1,pass(n-1),i,:) = track(m-i,:);
                            FSLN(n-1,pass(n-1),i,:) = trackface(m-i,:);
                            ISLN(n-1,pass(n-1),i,:) = trackimage(m-i,:);
                        end
                        %pass(n-1) = pass(n-1) + 1;
                        count = count + 1;
                    else
                        pass(n-1) = pass(n-1) + 1; % test
                        NbrDSSlns(n) = pass(n-1);
                        
                        for i = 1:(m-1)
                            
                            RP(n,pass(n-1),i,:) = track(m-i,:);
                            RF(n,pass(n-1),i,:) = trackface(m-i,:);
                        end
                        %                     pass(n-1) = pass(n-1) + 1;
                        count = count + 1;
                    end
                end
                
                
            end
            
            
            if goflag == 0
                
                golevel = OrdRef+1;
                goflag = 1;
                
            elseif goflag == 1
                
                if loopdomain(OrdRef) == 1 % special case: only one point left on the last second level
                    p = 1;  % flag
                    jumplevel = OrdRef-1;
                    pp = 0;
                    
                    while jumplevel >= 1 && pp == 0 %  backtrack until there is more than one valid point on that level,
                        
                        if ( loopdomain(jumplevel)==1 )  % important for the next start point
                            jumplevel = jumplevel-1;
                            pp = 0;
                        else
                            pp = 1;
                        end
                    end
                    
                    golevel = OrdRef+1;
                    
                else
                    
                    p = 0;
                    golevel = OrdRef+1;
                end
                
            end
        end
        
        
        
        %------check if the point on the last level is useful------%
        if golevel == OrdRef+1
            
            x = 0;
            for iii =1:loopdomain(golevel)
                facecheck(:,1) = Mpath(golevel,iii,1:2);    % 1*2
                pointcheck(:,1) = Mpath(golevel,iii,3:5);   % 3*1
                extremcheck(:,1) = reshape(recept,3,1); %3*1
                pointVcheck(:,1) = Breakthrough(facecheck',pointcheck,extremcheck);
                
%                 if (facecheck(1) == 0)   % if ground
%                     app = AppGround(pointVcheck);
%                 else
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     app = AppFace(pointVcheck,facecheck); % Attention AppFace input dimension match
                    app = AppFace2(pointVcheck,squeeze(wedges(facecheck(1),facecheck(2),:,:)).');
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                 end
                
                if app == 1
                    x = x+1;
                    numberuse(x) = iii;   %  the useful imagepoints index on the last level
                end
            end

            if x == 0   %  if no useful imagepoints
                if p == 1  % update the image tree from the 1st point on jumplevel
                    golevel = jumplevel;
                elseif p == 0
                    golevel = golevel-1;
                end
                b = 1; % there is no valid point on the last level, continue part 1
            elseif x >= 1 && x <loopdomain(golevel)    %   renew the OrdRef+1 level
                for u = 1:x
                    leveltemp(1,u,:) = Mpath(golevel,numberuse(u),:);
                end
                Mpath(golevel,:,:) = 0;
                Mpath(golevel,1:x,:) = leveltemp(1,1:x,:);
                if p == 1  % update the image tree from the 1st point on jumplevel
                    golevel = jumplevel;
                elseif p == 0
                    golevel = golevel-1;    
                end
                b = 0; % there are valid points on the last level, go to part 2
            elseif x == loopdomain(golevel)  %  all imagepoints can be used
                if p == 1  % update the image tree from the 1st point on jumplevel
                    golevel = jumplevel;
                elseif p == 0
                    golevel = golevel-1;   
                end
                b = 0;  % there are valid points on the last level, go to part 2  
            end   
        else
            b = 0;
        end       
    end
    
    loopdomain(OrdRef+1) = x; %  # valid points on the last level
    
    
    %% part 2
    % Backtrack from the points on the last level, calculate full order ('OrdRef') reflection path
    
    
    n = 1;
    while (n <= loopdomain(OrdRef+1) )   % loop for useful image points in the last level
        glob = 1;
        j = OrdRef+1;
        back = Mpath(OrdRef+1,n,:);
        m = 1;
        extrem(:,1) = recept;
        
        while (j ~=1 && glob == 1)
            bt1 = reshape(back(1:2),1,2);    % face
            bt2 = reshape(back(3:5),3,1);    % point
            bt3 = reshape(extrem,3,1);
            pointV(:,1) = Breakthrough(bt1,bt2,bt3);
            
            track(m,:) = pointV;            % coordinates of reflection point
            trackface(m,:) = back(1:2);     % face
            trackimage(m,:) = back(3:5);    % image
            difftest = extrem - pointV;
            
%             if (back(1) ~= 0)
                vnfaces_re(:,1) = vnfaces(trackface(m,1),trackface(m,2),:);
                
                if ((vnfaces_re'*difftest) <= 0)
                    glob = 0;
                    break;
                end
%             end
%             if (back(1) == 0) 
%                 app = AppGround(pointV);
%             else
                back_temp=back(1,1:2);
                back_temp=back_temp';
                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                 app = AppFace(pointV,back_temp); % Attention AppFace input dimension match
                app = AppFace2(pointV,squeeze(wedges(back_temp(1),back_temp(2),:,:)).');
                %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                
%             end
            
            if (app == 1)
                cache = Blocking(extrem,pointV);
                if (cache == 1)
                    glob = 0;
                    break;
                end
                
                fface(1) = back(1);   % index of the current block
                if (fface(1) > 0)
                    for Nface = 1:6
                        if (Nface ~= back(2))
                            fface(2) = Nface;
                            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                             appf = AppFace(pointV,fface);
                            appf = AppFace2(pointV,squeeze(wedges(fface(1),fface(2),:,:)).');
                            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                            if (appf == 1)
                                glob = 0;
                                break;
                            end
                        end
                    end
                    
                    tempvalue = norm(extrem - pointV);
                    if (tempvalue < 1.0e-12)
                        glob = 0;
                        break;
                    end
                end
            else
                glob = 0;
                break;
            end
            
            extrem(:,1) = pointV;
            j = j-1;
            back = Mpath(j,1,:);
            m = m+1;
            
        end
        
        if (glob == 1)
            Temp3(:,1)=tx;
            cache = Blocking(Temp3,pointV);
            
            if (cache == 1)
                glob = 0;
            end
        end
        if (glob == 1)
            Reflex = 1;
            if (rvsds == 0)
                pass(OrdRef) = pass(OrdRef) + 1; % test
                NbrSlns(OrdRef) = pass(OrdRef);
                for i = 1:(m-1)
                    PSLN(OrdRef,pass(OrdRef),i,:) = track(m-i,:);
                    FSLN(OrdRef,pass(OrdRef),i,:) = trackface(m-i,:);
                    ISLN(OrdRef,pass(OrdRef),i,:) = trackimage(m-i,:);
                end
                %             pass(OrdRef) = pass(OrdRef) + 1;
                count = count + 1;
            else
                pass(OrdRef) = pass(OrdRef) + 1; %test
                NbrDSSlns(OrdRef+1+1) = pass(OrdRef);
                for i = 1:(m-1)
                    RP(OrdRef+1+1,pass(OrdRef),i,:) = track(m-i,:);
                    RF(OrdRef+1+1,pass(OrdRef),i,:) = trackface(m-i,:);
                end
                %             pass(OrdRef) = pass(OrdRef) + 1;
                count = count + 1;
            end
        end
        n = n+1;  % path calculation of current point end,  go to next point on the same level    
    end
    b = 1;  % go back to part 1
end



for i = 1:OrdRef
    if (Reflex == 0)
        if (rvsds == 0)
            NbrSlns(i) = 0;
        else
            NbrDSSlns(i) = 0;
        end
    end
    if ((count ~= 0) || (oldReflex == 1) || (Reflex) == 1)
        Reflex = 1;
    else
        if (rvsds == 0)
            NbrSlns(i) = 0;
        else
            NbrDSSlns(i) = 0;
        end
    end
    
end

