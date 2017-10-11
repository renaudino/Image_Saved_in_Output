function pnbr = EffPointsImages(mid)
% In order to find the coordinates of the image points in the same order

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.21

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Using Mpath, remove previous level, Nbfaces, flag 

global wedges Nblock vnfaces Mpath;

m = (mid+1); % corresponding imagepoints are stored in the next level
n = 0;       
v = zeros(3,1);
no = zeros(3,1);
cnt = zeros(3,1);
E = zeros(3,1);
wedges_re = zeros(3,1);
vnfaces_re = zeros(3,1);
p = zeros(3,1);

E(:,1) = Mpath(mid,1,3:5);  % point
face = Mpath(mid,1,1:2);    % face

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
                    v = (v + (wedges_re - cnt))/4;
%                 else
%                     v = (v + (wedges_re - E))/4;
%                 end 
            end
            
%             if(face(1) == 0)    % the privoius relection from ground
%                 resu1 = -1;
%             else
                vnfaces_re(:,1) = vnfaces(i,j,:);
                resu1 = v'*vnfaces_re;
%             end
            if (resu1 < 0)
                n = n + 1;

                Mpath(m,n,1:2)=[i,j];   % face
                no(:,1) = vnfaces(i,j,:);
                p(:,1) = wedges(i,j,1,:);
                pt = p - E;
                Mpath(m,n,3:5)=E + 2*(no'*pt).*no;

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
%     Mpath(m,n,1:2)=[0;0];
%     Mpath(m,n,3:5)=E + 2*(no'*pt).*no;
% 
% end 
pnbr = n;
    
    
                    

