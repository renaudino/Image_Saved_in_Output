function Pbreak = Breakthrough(face, Pnneg_re, Pnpos_re)
% Calculates the breakthrough point in the face                                
% Pneg : point on the negative normal vector side                          
% Ppos : point on the positive normal vector side 

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.19

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global wedges vnfaces;
wedges_re = zeros(3,1);
Pnneg = Pnneg_re;
Pnpos = Pnpos_re;
Pbreak = zeros(3,1);
n = zeros(3,1);
rp = zeros(3,1);
ri = zeros(3,1);

% if(face(1) == 0)
% if(face(1) == 0 && face(2) == 0)
%     n = [0;0;1];
%     rp(:,1) = -Pnpos(:,1);
%     ri(:,1) = Pnneg(:,1) - Pnpos(:,1);
% else
    n(:,1) = vnfaces(face(1),face(2),:);
    wedges_re(:,1) = wedges(face(1),face(2),3,:);
    rp(:,1) = wedges_re - Pnpos(:,1);
    ri(:,1) = Pnneg(:,1) - Pnpos(:,1);
% end
num = n'*rp;
den = n'*ri;
Pbreak(:,1) = Pnpos(:,1) + (num/den)*ri(:,1);

      