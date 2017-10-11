function res = amoins(n,beta)
% a-
% used in function FDsh

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6

nm = 0;

comp = abs(-beta+pi);
for ns = -1:1
	if (abs(2.0*pi*n*ns-beta+pi) < comp)
	    nm = ns;
	    comp = abs(2.0*pi*n*ns-beta+pi);
    end 
end 
res          = 2*(cos((2*n*nm*pi-beta)/2))^2;
% res = (2.0*cos((2.0*n*nm*pi-beta)/2.0)*cos((2.0*n*nm*pi-beta)/2.0));
