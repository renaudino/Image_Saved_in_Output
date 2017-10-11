function N = CalcDiffPt(n)
% Diffraction Points 
% using the similar triangles method

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6
global oFace nFace DiffWedges emett recept Nblock RTH DiffPSLN DiffASLN DiffNFSLN DiffFSLN wedges;
N = 0;
face = zeros(2,1);
facet = zeros(2,1);
for l = 1:n
    face(1) = oFace(l,1);
    face(2) = oFace(l,2);
    Vdir(:,1) = DiffWedges(l,2,:)-DiffWedges(l,1,:);
    val = norm(Vdir);
    Vdir = 1/val*Vdir;
    DiffWedges_re(:,1) = DiffWedges(l,1,:);
    WedTrans = emett-DiffWedges_re;
    %val = dot(WedTrans,Vdir);
    val = WedTrans'*Vdir;
    v1 = val*Vdir;
    ProjTrans = v1+DiffWedges_re;
    WedRece = recept-DiffWedges_re;
    %val = dot(WedRece,Vdir);
    val = WedRece'*Vdir;
    v1 = val*Vdir;
    ProjRece = v1+DiffWedges_re;
    vdir = ProjRece-ProjTrans;
    val = norm(vdir);
    if (val ~= 0)
        vdir = 1/val*vdir;
    end 
    EA = ProjTrans-emett;
    dTA = norm(EA);
    RB = ProjRece-recept;
    dRB = norm(RB);
    rapp = dTA/dRB;
    AB = ProjRece-ProjTrans;
    dAB = norm(AB);
    dAQ = dAB*(rapp/(rapp+1));
    v1 = dAQ*vdir;
    Qdiff = ProjTrans+v1;
    v2 = ProjTrans-Qdiff;
    v3 = ProjRece-Qdiff;
    %resul = dot(v2,v3);
    resul = v2'*v3;
    aw = AppWedge(DiffWedges(l,1,:),DiffWedges(l,2,:),Qdiff);
    if ((aw == 1) && (abs(Qdiff(3)) >= 1.0e-3) && (resul <= 0) && (abs(Qdiff(3)) <= (RTH-1.0e-3)))
        mqe = Blocking(emett,Qdiff);
        mqr = Blocking(recept,Qdiff);
        nb = 0;
        i = 1;
        while ((i <= Nblock) && (nb == 0))
            j = 1;
            if (i == nFace(l,1))
                nb = 0;
                i = i+1;
            else
                while ((j <= 6) && (nb == 0))
                    facet(1) = i;
                    facet(2) = j;
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     af = AppFace(Qdiff,facet);
                    af = AppFace2(Qdiff,squeeze(wedges(facet(1),facet(2),:,:)).');
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    if (af == 1)
                        nb = 1;
                    end 
                    j = j+1;
                end 
                i = i+1;
            end
        end 
        if ((mqe == 0) && (mqr == 0) && (nb == 0))
            N = N+1;
            DiffPSLN(N,:) = Qdiff;    % diffraction points
            DiffASLN(N,:) = vdir;     % Edge(pt1, pt2)
            DiffNFSLN(N,:) = nFace(l,:);   % face n
            DiffFSLN(N,:) = oFace(l,:);    % face o         
        end 
    end
end