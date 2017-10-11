function Construct(OrdRef)
% Build the image tree

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.21

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Build the image tree in level order from 1 to OrdRef+1, instead of using recursion 
% Mtrun: 1   -----   flag, empty or not
%        2~3 -----   face, 2--block index 3--surface index
%        4~6 -----   point coordinates
%        7   -----   Nbfaces, number of images of current point 
%        8~9 -----   previous level

global Nbrimg Mtrun;
mid = zeros(2,1);
M = zeros(OrdRef+1,1); % image points number in each level
M(1) = 1;              
for i = 1:OrdRef
   a=0;
   b=0;
   mid(1) = i;       % level
   for j = 1:M(i)
       mid(2) = j;   % point index
       pnbr = PointsImages(mid); % Number of image points for current point
       Nbrimg(i+1) = Nbrimg(i+1)+pnbr;
       Mtrun(i,j,7) = pnbr;    
       
       if j == 1      % corresponding images points index in next level
               a=1;
               b=pnbr;
       else
               a=b+1;
               b=b+pnbr;
       end
       
       Mtrun(i+1,a:b,8) = i;   %  previous level
       Mtrun(i+1,a:b,9) = j;   %  previous level
       M(i+1) = M(i+1)+pnbr;
       
   end      
end