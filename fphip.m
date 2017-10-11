function res = fphip(s,e,t,n)
% PHI-Angel (incident)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6
if (norm(e) <= 1.0e-6)
    s = (-1)*s;
    %res = pi/2-acos(dot(s,n))*sign(dot(s,t)); 
    res = pi/2-acos(s'*n)*sign(s'*t);    
else 
    tmp = (-1)*dot(s,e)*e;
    st = s+tmp;
    st = 1/(norm(st))*st;
    %res = pi-(pi-acos((-1)*dot(st,t)))*sign((-1)*dot(st,n));    
    res = pi-(pi-acos((-1)*(st'*t)))*sign((-1)*(st'*n));   
end 