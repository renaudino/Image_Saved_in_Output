function CalcPath(tx,rx,ordmax,rvsds)
% Calculates the path followed by a ray, i.e. the reflection points

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.26
%          2011.10.4 updated after learning the diffuse scattering

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global vnfaces NbrSlns PSLN FSLN Reflex NbrDSSlns RP RF oldReflex Mtrun Nbrimg wedges;

ornum = 1;
% pass = 1;
pass = 0; % test
count = 0;
maxnumber = max(Nbrimg(:));

app = 0;

%--------------- unify variable size for code convertion -----------------%
fface = zeros(2,1);
curs = zeros(1,9);
right = zeros(1,9);
back = zeros(1,9);
extrem = zeros(3,1);
pointV = zeros(3,1);
vnfaces_re = zeros(3,1);
lastface = zeros(2,1);
track = zeros(ordmax,3);
trackface = zeros(ordmax,2);
Temp3=zeros(3,1);
%-------------------------------------------------------------------------%


curs(1,:) = Mtrun((ordmax+1),ornum,:);
right = curs; 
oldReflex = Reflex;

while (right(1)~=0) % if not empty, then continue
    back = right;
    extrem(:,1) = rx;
    glob = 1;
    m = 1;
   while (back(8)~=0 && glob ==1) 
       bt1 = reshape(back(2:3),1,2);
       bt2 = reshape(back(4:6),3,1);
       bt3 = reshape(extrem,3,1);
       pointV(:,1) = Breakthrough(bt1,bt2,bt3);
       track(m,:) = pointV;   
       trackface(m,:) = back(2:3);
       difftest = extrem - pointV;
       
%        if (back(2) ~= 0)
           vnfaces_re(:,1) = vnfaces(trackface(m,1),trackface(m,2),:);
           if ((vnfaces_re'*difftest) <= 0)
               glob = 0;
               break;
           end
%        end
       
%        if (back(2) == 0)
%            app = AppGround(pointV);
%        else
           back_temp=back(1,2:3);
           back_temp=back_temp';
           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%            app = AppFace(pointV,back_temp);
           app = AppFace2(pointV,squeeze(wedges(back_temp(1),back_temp(2),:,:)).');
           %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%        end
       
       if (app == 1)
           cache = Blocking(extrem,pointV);
           if (cache == 1)
               glob = 0;
               break;
           end
           
           fface(1) = back(2);
%            if (fface(1) > 0)
               for j = 1:6
                    if (j ~= back(3))
                        fface(2) = j;
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         appf = AppFace(pointV,fface);
                        appf = AppFace2(pointV,squeeze(wedges(fface(1),fface(2),:,:)).');
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
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
%             end 
        else 
            glob = 0;
            break;
        end
    
        extrem(:,1) = pointV;
        lastface(:,1) = back(2:3);
        back = reshape(Mtrun(back(8),back(9),:),1,9);
        m = m+1;    % means the reflection point found is okay, then go to the upper level


   end 
    
    lastface(:,1) = back(2:3);
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
            pass = pass + 1;
            NbrSlns(ordmax) = pass;
            for i = 1:(m-1)
                PSLN(ordmax,pass,i,:) = track(m-i,:);
                FSLN(ordmax,pass,i,:) = trackface(m-i,:);
            end
%             pass = pass + 1;
            count = count + 1;
        else 
            pass = pass + 1;
            NbrDSSlns(ordmax+1) = pass;
            for i = 1:(m-1)
                RP(ordmax+1,pass,i,:) = track(m-i,:);
                RF(ordmax+1,pass,i,:) = trackface(m-i,:);
            end
%             pass = pass + 1;
            count = count + 1;             
        end 
    end
    ornum = ornum+1;
    
    if ornum <= maxnumber
         right = reshape(Mtrun((ordmax+1),ornum,:),1,9);
    else
       break;
    end
end 
if (Reflex == 0)
    if (rvsds == 0)
        NbrSlns(ordmax) = 0;
    else 
        NbrDSSlns(ordmax) = 0;
    end 
end 
if ((count ~= 0) || (oldReflex == 1) || (Reflex) == 1)
    Reflex = 1;
else 
    if (rvsds == 0)
        NbrSlns(ordmax) = 0;
    else 
        NbrDSSlns(ordmax) = 0;
    end
end 

        