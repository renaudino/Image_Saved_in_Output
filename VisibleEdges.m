function [n] = VisibleEdges ()

% visible edges
% -> n is the number of visible edges

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6

global DiffWedges emett Nblock nFace oFace vnfaces wedges;

n                                     = 0;

for i = 1:Nblock
    for j = 1:6
        v1                            = [0 0 0].';
        for l = 1:4
            wedges_re(:,1)            = wedges(i,j,l,:);
            v1                        = v1+(wedges_re-emett)/4;
        end
        vnfaces_re(:,1)               = vnfaces(i,j,:);
        
        prod                          = v1'*vnfaces_re;
        
        if (prod < 0)
            for k = 1:4
                a                     = k+1;
                if (a > 4)
                    a                 = 1;
                end
                
                % find the face adjoining face j on the considered edge
                m                     = 0;
                nf                    = 0;
                
                while (m < 6) && (nf == 0)
                    m             = m+1;
                    if (m == j)
                        nf        = 0;
                    else
                        facen     = [i m].';
                        
                        nf1       = AppFace2(squeeze(wedges(i,j,a,:)),squeeze(wedges(facen(1),facen(2),:,:)).');
                        nf2       = AppFace2(squeeze(wedges(i,j,k,:)),squeeze(wedges(facen(1),facen(2),:,:)).');
                        
                        nf        = nf1*nf2;
                    end
                end
                
                if (nf == 1)
                    n                     = n+1;
                    if (j < 5)
                        DiffWedges(n,1,:) = wedges(i,j,a,:);
                        DiffWedges(n,2,:) = wedges(i,j,k,:);
                    else
                        DiffWedges(n,1,:) = wedges(i,j,k,:);
                        DiffWedges(n,2,:) = wedges(i,j,a,:);
                    end
                    
                    oFace(n,:)            = [i j]; % 'oFace' and 'nFace' are the related two faces about one visible edge finally
                    nFace(n,:)            = [i m];
                    
                    c1                    = [];
                    c2                    = [];
                    if (n > 1)
                        I                 = 2;
                        c1                = ismember(reshape(DiffWedges(1:n-1,1,1:I),n-1,[]),reshape(DiffWedges(n,1,1:I),1,[]),'rows');
                        c2                = ismember(reshape(DiffWedges(1:n-1,2,1:I),n-1,[]),reshape(DiffWedges(n,2,1:I),1,[]),'rows');
                    end
                    if ~isempty(intersect(find(c1),find(c2)))
                        DiffWedges        = DiffWedges(1:n-1,:,:);
                        oFace             = oFace(1:n-1,:);
                        nFace             = nFace(1:n-1,:);
                        n                 = n-1;
                    end
                end
            end
        end
    end
end