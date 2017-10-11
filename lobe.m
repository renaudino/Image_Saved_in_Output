function Dmc = lobe(cosp,alpha) 
% directive model coefficient
% Calculates the ((1+cosfr)/2).^alpha (refer to the paper Vittorio D. 2007)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.10.3
Dmc = ((1+cosp)/2).^alpha;