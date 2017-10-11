function appground = AppGround(gpoint)
% Calculates if the point belongs to the ground

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.19

global Nblock;
face1 = zeros(2,1);
face1(2) = 5;

appground = 1;
for i = 1 : Nblock
    face1(1) = i;
    appface = AppFace(gpoint,face1);
    if (appface == 1)
        appground = 0;
        break; 
    end 
end 