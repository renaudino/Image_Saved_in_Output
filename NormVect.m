function vnfaces = NormVect()
% Perpendicular vectors
% vnfaces[i][j][k] : block index, face index, perp. vector components  

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.19 

global Nblock wedges;

vnfaces = zeros(Nblock,6,3);

v1 = zeros(3,1);
v2 = zeros(3,1);

for i = 1:Nblock
    for j = 1:6
        v1(:,1) = wedges(i,j,2,:) - wedges(i,j,1,:);    
        v2(:,1) = wedges(i,j,4,:) - wedges(i,j,1,:);
        vnfaces(i,j,:) = cross(v1,v2);    
        normv = sqrt(vnfaces(i,j,1).^2 + vnfaces(i,j,2).^2 + vnfaces(i,j,3).^2);
        vnfaces(i,j,:) = vnfaces(i,j,:)/normv;
    end
end


