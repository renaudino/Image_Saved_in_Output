function flag = BlockCheck(bl,p_re)
% Checks if the penetration point belongs to some other block

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.27

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

global Nblock wedges;

p=zeros(3,1);
res=0;

p(:,1) = p_re;
flag = -1;
f = zeros(2,1);
for i = 1 : Nblock
    if (i ~= bl)
        for j = 1:6
            f(1) = i;
            f(2) = j;
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%             res = AppFace(p,f);
            res = AppFace2(p,reshape(wedges(f(1),f(2),:,:),[],3).');
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            if (res == 1)
                flag = i;
            end 
        end 
    end 
end 
% if (p(3) == 0)
%     if (bl ~= 0)
%         flag = 0;
%     end
% end
