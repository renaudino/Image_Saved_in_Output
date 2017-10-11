function res = FB0(x)
% Fresnel Integrals according to Boersma

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History: 2011.10.6

a=[1.595769140,-0.000001702,-6.808568854,-0.000576361,6.920691902,-0.016898657,-3.050485660,-0.075752419,0.850663781,-0.025639041,-0.150230960,0.034404779];
b=[-0.000000033,4.255387524,-0.000092810,-7.780020400,-0.009520895,5.075161298,-0.138341947,-1.363729124,-0.403349276,0.702222016,-0.216195929,0.019547031];
c=[0.0,-0.024933975,0.000003936,0.005770956,0.000689892,-0.009497136,0.011948809,-0.006748873,0.000246420,0.002102967,-0.001217930,0.000233939];
d=[0.199471140,0.000000023,-0.009351341,0.000023006,0.004851466,0.001903218,-0.017122914,0.029064067,-0.027928955,0.016497308,-0.005598515,0.000838386];
if (x < 0.0)
  disp('Error in Boersma Fresnel integral calculation, check argument!');
  exit;
end 
fr = 0.0;
fi = 0.0;
if (x <= 4.0)
    y = x/4.0;
    n = 12;
    while (n >= 2)
        fr = (fr+a(n))*y;
        fi = (fi+b(n))*y;
        n = n-1;
    end
    fr = a(1)+fr;
    fi = b(1)+fi;
    c0 = (cos(x)*fr+sin(x)*fi)*sqrt(y);
    s0 = (sin(x)*fr-cos(x)*fi)*sqrt(y);
    res = complex(c0,-s0);
else
    y = 4.0/x;
    n = 12;
    while (n >= 2)
        fr = (fr+c(n))*y;
        fi = (fi+d(n))*y;
        n = n-1;
    end
    fr = c(1)+fr;
    fi = d(1)+fi;
    c0 = 0.5+(cos(x)*fr+sin(x)*fi)*sqrt(y);
    s0 = 0.5+(sin(x)*fr-cos(x)*fi)*sqrt(y);
    res = complex(c0,-s0);
end 