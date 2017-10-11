function appface = AppFace(point_re,face) %#codegen
% Calculates if the point belongs to the face

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.19
global wedges;

point = reshape(point_re,3,1);
VectP1 = zeros(3,1);
VectP2 = zeros(3,1);
VectP4 = zeros(3,1);
u = zeros(3,1);
v = zeros(3,1);

%p1(:,1) = wedges(face(1),face(2),1,:);
%p2(:,1) = wedges(face(1),face(2),2,:);
%p3(:,1) = wedges(face(1),face(2),4,:);

p1 = reshape(wedges(face(1),face(2),1,:),3,1);
p2 = reshape(wedges(face(1),face(2),2,:),3,1);
p3 = reshape(wedges(face(1),face(2),4,:),3,1);

%u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:);
%v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:);
u(:,1) = p2 - p1;
v(:,1) = p3 - p1;
  
VectP1(:,1) = p1 - point;
VectP2(:,1) = p2 - point;
VectP4(:,1) = p3 - point;

%resu1 = dot(VectP1,u);
%resu2 = dot(VectP2,u);
resu1 = VectP1'*u;
resu2 = VectP2'*u;
test1 = resu1*resu2;

%resu1 = dot(VectP1,v);
%resu2 = dot(VectP4,v);
resu1 = VectP1'*v;
resu2 = VectP4'*v;
test2 = resu1*resu2;

det  = ((p2(2)-p1(2))*(p3(3)-p1(3))-(p3(2)-p1(2))*(p2(3)-p1(3)))*(point(1)-p1(1)) + ...
       ((p2(3)-p1(3))*(p3(1)-p1(1))-(p3(3)-p1(3))*(p2(1)-p1(1)))*(point(2)-p1(2)) + ...
       ((p2(1)-p1(1))*(p3(2)-p1(2))-(p3(1)-p1(1))*(p2(2)-p1(2)))*(point(3)-p1(3));
   
if (test1 <= 1.0e-10) && (test2 <= 1.0e-10) && (abs(det) <= 1.0e-8)
    appface = 1;
else 
    appface = 0;
end