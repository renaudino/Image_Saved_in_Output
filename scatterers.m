function [DSN, PDS, FDS, Area] = scatterers (ebl, vtx_re, PDS, FDS, Area) % (OR): modified on 16.11.2016

% Searches for the blocks and faces which experience scattering: calculating scattering points
% locations --- 'dispoints'
% 
% Author: Xuhong Li <xuhong@ftw.at>
% 
% History: 2013.10.10

global Nblock vnfaces wedges DSFlag;

DSN = 0;
vtx = reshape(vtx_re,3,1);

cntpt = zeros(3,1);
vnfaces_re = zeros(3,1);

for i = 1:Nblock
    if (i ~= ebl)
        if (DSFlag(i) == 1)
            for j = 1:6
                cntpt(:,1)      = (wedges(i,j,1,:)+wedges(i,j,2,:)+wedges(i,j,3,:)+wedges(i,j,4,:))/4; % (OR): centroids
                difftest        = vtx-cntpt;
                vnfaces_re(:,1) = vnfaces(i,j,:);
                
                if ((vnfaces_re'*difftest) > 0) %(dot(vnfaces_re,difftest) > 0)
                    [points,n,space]   = dispointsQP(i,j,vtx);
                    
                    PDS(DSN+1:DSN+n,:) = points;
                    
                    faces              = zeros(n,2);
                    faces(:,1)         = i;
                    faces(:,2)         = j;
                    
                    FDS(DSN+1:DSN+n,:) = faces;  % surface index
                    Area(DSN+1:DSN+n)  = space;  % tile size
                    DSN                = DSN+n;  % tile number on corresponding surface
                end
            end
        end
    end
end