function Scase3(fvsl,ppt_re,cntpt_re,Area_re,dsf)
% After subdivision, all sub surfaces satisfy far field condition,
% transfer the information contained in SAT to PDS, FDS and Area

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.03

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01



global recept DSN PDS FDS Area;

bk = 0;

if (fvsl == 1)
        bk = Blocking(ppt_re,cntpt_re);
elseif (fvsl == 0)
        bk = Blocking(recept,cntpt_re);
end

if (bk ~= 1)
        DSN = DSN+1;
        PDS(DSN,:) = cntpt_re;
        FDS(DSN,:) = dsf;
        Area(DSN) = Area_re;
end      