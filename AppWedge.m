function wedgeApp = AppWedge(P1_re,P2_re,DiffPt)
% Checks if the diffraction point belongs to the wedge

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.9.30
P1 = reshape(P1_re,3,1);
P2 = reshape(P2_re,3,1);
Qd1 = P1 - DiffPt;
Qd2 = P2 - DiffPt;

%test = dot(Qd1,Qd2);
test = Qd1'*Qd2;

if (test < 0)
    wedgeApp = 1;
else 
    wedgeApp = 0;
end 