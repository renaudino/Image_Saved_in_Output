function [points, number, space] = dispointsQP (b, f, op)

% Generates quasi randomly distributed scattering tiles without overlapping on each surface
% 
% Authors: Xuhong Li <xuhong@ftw.at>
% 
% History: 2013.10.01

global wedges vnfaces lambda;

point_temp = zeros(3,1);
area_temp  = 0;

% Based on far-field condition, decide a proper tile size
for aa = 1:4
    point_temp(1:3) = wedges(b,f,aa,:);
    d               = norm(op-point_temp);
    edge            = sqrt(d*lambda/2);
    area_temp       = area_temp+edge;
end
area = pi*(area_temp/8)^2;
radi = 2*sqrt(area/pi);   % assume the area is circular

number = 0;               % number of scatterers on this surface

normal      = zeros(3,1);
normal(:,1) = vnfaces(b,f,:);

points = zeros(10000,3);
space  = 0;

p1 = reshape(wedges(b,f,1,:),3,1);
p2 = reshape(wedges(b,f,2,:),3,1);
p3 = reshape(wedges(b,f,3,:),3,1);
p4 = reshape(wedges(b,f,4,:),3,1);

spacelimit = [min([p1 p2 p3 p4],[],2) max([p1 p2 p3 p4],[],2)];

% center = op;
% a = 1;
% while (center == op)
%     fprintf('   [%d %d %d] \n',b,f,a);
    center     = p1+(p2-p1)*rand(1)+(p4-p1)*rand(1);
%     a = a+1; [op center]
% end

d1 = norm(center-p1);
d2 = norm(center-p2);
d3 = norm(center-p3);
d4 = norm(center-p4);

dis_max = max([d1 d2 d3 d4]);
n       = floor(dis_max/radi); % number of number of concentric circles

if (n == 0) || (n == 1)
    points    = zeros(1,3);
    points(:) = (wedges(b,f,1,:)+wedges(b,f,2,:)+wedges(b,f,3,:)+wedges(b,f,4,:))/4;
    number    = 1;
    
elseif (n > 1)
    number_sub = 0;
    i = 1;
    
    while (i <= n) % loop for each circle
        theta = rand(1)*2*pi;     % random start angle
        angle = 2*asin(1/(2*i));  % angle resolution
        np    = ceil(2*pi/angle);
        count = 0;
        
        for m = 0:np-1
            a    = theta+m*angle;
            k    = normal/norm(normal);
            v    = center+(p1-center)/norm(p1-center)*radi*i;
            vrot = center+(v-center)*cos(a)+cross(k,(v-center))*sin(a); % Rodrigues' rotation formula
            
            if (vrot(1) < spacelimit(1,2) && vrot(1) > spacelimit(1,1) && ...
                    vrot(2) < spacelimit(2,2) && vrot(2) > spacelimit(2,1) && ...
                    vrot(3) < spacelimit(3,2) && vrot(3) > spacelimit(3,1))
                number_sub           = number_sub+1;
                points(number_sub,:) = vrot.';
                count                = count+1;
            end
        end
        i = i+1;
    end
    number_sub           = number_sub+1;
    
    points(number_sub,:) = center;       % add 'center' as a scatterer
    number               = number_sub;
end
temp = number*area/norm(cross(p3-p1,p4-p2))*2;%(sqrt(line(1)^2+line(2)^2)*line(3));%(line(1)*line(2)); % compare the sum of tile size with the surface area

if (temp <= 1) %  if the ratio 'temp <= 1', then use default area size
    space = ones(number,1)*area;
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%  force the area ratio = 1  %%%%%%%
    %     Npe_area = Npe_area+1;            %
    %     pe_area(Npe_area) = 1;            %
    %     Area = line(1)*line(2)/number;    %
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
elseif (temp > 1) %  otherwise, use averaged area size
    space = ones(number,1)*(norm(cross(p3-p1,p4-p2))/2/number);%(line(1)*line(2)/number);
end

points(number+1:end,:) = [];