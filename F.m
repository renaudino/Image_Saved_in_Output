function res = F(x)
% Transition function calculated by Boersma's method

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6

modx = abs(x);
res = FB0(modx);
c0 = real(res);
s0 = -imag(res);
fr = (cos(modx)*(0.5-s0)-sin(modx)*(0.5-c0))*sqrt(2.0*pi*modx);
fi = (cos(modx)*(0.5-c0)+sin(modx)*(0.5-s0))*sqrt(2.0*pi*modx);
res = complex(fr,fi);
if (x < 0.0)
  res = conj(res);
end 
