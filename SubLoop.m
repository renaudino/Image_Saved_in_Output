function SubLoop(ebl,vtx_re)
% Searches for the blocks and faces that experiences scattering

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.10.3
global Nblock DSFlag wedges vnfaces DSN; 

DSN = 0;
PDS = [];
FDS = [];
Area = [];
vtx = reshape(vtx_re,3,1);
dsf = zeros(2,1);
for i = 1:Nblock
    if (i ~= ebl)
        if (DSFlag(i) == 1)
            for j = 1:6
                cntpt(:,1) = (wedges(i,j,1,:)+wedges(i,j,2,:)+wedges(i,j,3,:)+wedges(i,j,4,:))/4;
                difftest = vtx-cntpt;
                vnfaces_re(:,1) = vnfaces(i,j,:);
                %if (dot(vnfaces_re,difftest) > 0)
                if ((vnfaces_re'*difftest) > 0)
                    dsf(1) = i;
                    dsf(2) = j;
                    pta_re = reshape(wedges(i,j,1,:),3,1);
                    ptb_re = reshape(wedges(i,j,2,:),3,1);
                    ptc_re = reshape(wedges(i,j,3,:),3,1);
                    ptd_re = reshape(wedges(i,j,4,:),3,1);
                    dsf = reshape(dsf,2,1);
                    ppt_re = reshape(vtx,3,1);
                    subdivision(1,pta_re,ptb_re,ptc_re,ptd_re,dsf,ppt_re)
%                     subdivision(1,pta_re,ptb_re,ptc_re,ptd_re,dsf,ppt_re,0);
%                   subdivision(1,wedges(i,j,1,:),wedges(i,j,2,:),wedges(i,j,3,:),wedges(i,j,4,:),dsf,vtx,0);
                end
            end 
        end 
    end 
end 