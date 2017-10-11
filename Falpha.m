function Falphr = Falpha(alpha,cost)
% F_alpha function
% Calculates the F_alphar (refer to the paper Vittorio D. 2007)

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.10.3
sint = sqrt(1-cost.^2);
dav = 1/(2.^alpha);
sumj = 0;
for j = 0:alpha
    alphabin = nchoosek(alpha,j);   % binomial coefficent
    dpi = 2*pi/(j+1);
    if (mod(j,2) == 0)
        Ij = dpi;
    else 
        sumw = 0;
        for w = 0:((j-1)/2)
            omegabin = nchoosek(2*w,w);
            sratio = (sint.^(2*w))/(2.^(2*w));
            sumw = sumw+(omegabin*sratio);
        end 
        Ij = dpi*cost*sumw;
    end 
    sumj = sumj+(alphabin*Ij);
end
Falphr = sumj*dav;
