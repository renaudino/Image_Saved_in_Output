function res = aplus(n,beta)
% a+
% used in function FDsh

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6

np = 0;
comp = abs(-beta-pi);
if ((abs(2.0*pi*n*(np+1)-beta-pi))<comp)
	np = np+1;
end 
res    = 2*(cos((2*n*np*pi-beta)/2))^2;
% res = (2.0*cos((2.0*n*np*pi-beta)/2.0)*cos((2.0*n*np*pi-beta)/2.0));