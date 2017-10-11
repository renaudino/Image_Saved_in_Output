function pnbr = PointsImages(mid)
% In order to find the coordinates of the image points in the same order

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.21

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global wedges Nblock DBIMAGES vnfaces Nbrimg Mtrun Nreflx recept;

m = (mid(1)+1);
n = Nbrimg(m);
v = zeros(3,1);
no = zeros(3,1);
cnt = zeros(3,1);
E = zeros(3,1);
pointV = zeros(3,1);
wedges_re = zeros(3,1);
vnfaces_re = zeros(3,1);
p = zeros(3,1);


E(:,1) = Mtrun(mid(1),mid(2),4:6);  % point
face = Mtrun(mid(1),mid(2),2:3);    % face


if (face(1) == -1)   %   if this is Tx
        cnt(:,1) = E;
else
%     if(face(1) ~= 0)  %  if this is not ground
        cnt(:,1) = sum(wedges(face(1),face(2),:,:),3)/4;   
        % the coordinates of the center point of the surface realted to the image
%     end
end

for i = 1:Nblock
    if i ~= face(1)    % make sure that the next reflection is not in the same surface as the previous one
        for j = 1:6
            for l = 1:4
                wedges_re(:,1) = wedges(i,j,l,:);
%                 if (face(1) ~= 0)
                    v = (v + (wedges_re - cnt));
%                 else
%                     v = (v + (wedges_re - E));
%                 end 
            end
            
            v = v/4; 
            
%             if(face(1) == 0)    % the privoius relection from ground
%                 resu1 = -1;
%                 
%             else
                vnfaces_re(:,1) = vnfaces(i,j,:);
                resu1 = v'*vnfaces_re;
%                 
%             end
            if (resu1 < 0)
                n = n + 1;

                Mtrun(m,n,:)=DBIMAGES;
                Mtrun(m,n,2:3)=[i,j];

                no(:,1) = vnfaces(i,j,:);
                p(:,1) = wedges(i,j,1,:);
                pt = p - E;
                Mtrun(m,n,4:6)=E + 2*(no'*pt).*no;
                
% -------------- remove useless points on the last level ---------------- %                
                if m == Nreflx+1   % the highest order of reflection
                    
                    pointV(:,1) = Breakthrough(Mtrun(m,n,2:3),Mtrun(m,n,4:6),recept);    % the coordinates of the reflection point       
%                     if (Mtrun(m,n,2) == 0)
%                         app = AppGround(pointV);   % check the relection point belongs to ground or not
%                     else
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                         app = AppFace(pointV,Mtrun(m,n,2:3));    % check the relection point belongs to surface or not
                        app = AppFace2(pointV,squeeze(wedges(Mtrun(m,n,2),Mtrun(m,n,3),:,:)).');
                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     end  
                    
                    if (app ~= 1)    % the point does not belongs to ground/surface
                        n = n-1;
                    end
                end
% ----------------------------------------------------------------------- %                
            end
        end
    end
end 

% no(1) = 0;    % ground case
% no(2) = 0;
% no(3) = 1;
% 
% pt = -E;
% 
% if (face(1) ~= 0) && (cnt(3)> 0)
%     n = n + 1;
% 
%     Mtrun(m,n,:)=DBIMAGES;
%     Mtrun(m,n,2:3)=[0;0];
%     Mtrun(m,n,4:6)=E + 2*(no'*pt).*no;
% 
% end 
pnbr = n-Nbrimg(m);
    
    
                    

