function res = fphi(s,e,t,n)
% PHI-Angel (diffraction)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6
if (norm(e) <= 1.0e-6)
    %res = pi/2+acos(dot(s,n))*sign((-1)*dot(s,t));  
    res = pi/2+acos(s'*n)*sign((-1)*(s'*t));     
else 
    tmp = (-1)*dot(s,e)*e;
    st = s+tmp;
    st = 1/(norm(st))*st;
    %res = pi-(pi-acos(dot(st,t)))*sign(dot(st,n));  
    res = pi-(pi-acos(st'*t))*sign(st'*n);   
end 