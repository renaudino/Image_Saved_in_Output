
%% 1st point for each block is the bottom right one. Then, we turn counterclockwise.

%% map scale
coef_scale = 1.02;


%% outer window #1 (giving on the street)
theta = 29.70; % (OR): [...] [°]

% window #1
Window_out1_x(1,[1 4])     = [0.25 0.00];
Window_out1_y(1,[1 4])     = [0.25*tand(theta) 0.00];

Window_out1_x(1,3)         = 1.55*sind(theta);
Window_out1_y(1,3)         = 1.55*cosd(theta);

Window_out1_x(1,2) = Window_out1_x(1,3)+0.15*cosd(theta);
Window_out1_y(1,2) = Window_out1_y(1,3)-0.15*sind(theta);

Window_out1_x(2,:) = Window_out1_x(1,:);
Window_out1_y(2,:) = Window_out1_y(1,:);

Window_out1_z(1,:) = [0.20 1.35];
Window_out1_z(2,:) = [1.45 2.60];

Wall_out1_x(1,:) = Window_out1_x(1,:); Wall_out1_y(1,:) = Window_out1_y(1,:); Wall_out1_z(1,:) = [0.00 0.20];
Wall_out1_x(2,:) = Window_out1_x(1,:); Wall_out1_y(2,:) = Window_out1_y(1,:); Wall_out1_z(2,:) = [2.60 3.00];

Post_out1_x(1,:) = [Window_out1_x(1,2) Window_out1_x(2,1) Window_out1_x(2,4) Window_out1_x(1,3)];
Post_out1_y(1,:) = [Window_out1_y(1,2) Window_out1_y(2,1) Window_out1_y(2,4) Window_out1_y(1,3)];
Post_out1_z(1,:) = [1.35 1.45];

% windows #2 to #7
for n = 2:7
    Window_out1_x(2*n-1,[1 4]) = Window_out1_x(2*(n-1)-1,[2 3])+0.10*sind(theta);
    Window_out1_y(2*n-1,[1 4]) = Window_out1_y(2*(n-1)-1,[2 3])+0.10*cosd(theta);
    
    if (n ~= 7)
        Window_out1_x(2*n-1,3) = Window_out1_x(2*n-1,4)+1.40*sind(theta); Window_out1_x(2*n-1,2) = Window_out1_x(2*n-1,3)+0.15*cosd(theta);
        Window_out1_y(2*n-1,3) = Window_out1_y(2*n-1,4)+1.40*cosd(theta); Window_out1_y(2*n-1,2) = Window_out1_y(2*n-1,3)-0.15*sind(theta);
    else
        Window_out1_y(2*n-1,3) = 8.95; Window_out1_x(2*n-1,3) = 8.95*tand(theta);
        Window_out1_y(2*n-1,2) = 8.95; Window_out1_x(2*n-1,2) = Window_out1_x(2*n-1,3)+0.15/cosd(theta);
    end
    Window_out1_x(2*n,:)       = Window_out1_x(2*n-1,:);
    Window_out1_y(2*n,:)       = Window_out1_y(2*n-1,:);
    
    Window_out1_z(2*n-1,:)     = [0.20 1.35];
    Window_out1_z(2*n,:)       = [1.45 2.60];
    
    Wall_out1_x(2*n-1,:)       = Window_out1_x(2*n-1,:); Wall_out1_y(2*n-1,:) = Window_out1_y(2*n-1,:); Wall_out1_z(2*n-1,:) = [0.00 0.20];
    Wall_out1_x(2*n,:)         = Window_out1_x(2*n,:); Wall_out1_y(2*n,:) = Window_out1_y(2*n,:); Wall_out1_z(2*n,:) = [2.60 3.00];
    
    % vertical metallic post
    Post_out1_x(2*n-2,:)       = [Window_out1_x(2*n-3,2) Window_out1_x(2*n-1,1) Window_out1_x(2*n-1,4) Window_out1_x(2*n-3,3)];
    Post_out1_y(2*n-2,:)       = [Window_out1_y(2*n-3,2) Window_out1_y(2*n-1,1) Window_out1_y(2*n-1,4) Window_out1_y(2*n-3,3)];
    Post_out1_z(2*n-2,:)       = [0.00 3.00];
    
    % horizontal metallic post
    Post_out1_x(2*n-1,:)       = [Window_out1_x(2*n-1,2) Window_out1_x(2*n,1) Window_out1_x(2*n,4) Window_out1_x(2*n-1,3)];
    Post_out1_y(2*n-1,:)       = [Window_out1_y(2*n-1,2) Window_out1_y(2*n,1) Window_out1_y(2*n,4) Window_out1_y(2*n-1,3)];
    Post_out1_z(2*n-1,:)       = [1.35 1.45];
end


%% inner windows
% window #1
Window_in_x(1,3)     = Post_out1_x(12,2)+0.025*sind(theta);
Window_in_y(1,3)     = Post_out1_y(12,2)+0.025*cosd(theta);

Window_in_x(1,4)     = Post_out1_x(12,1)-0.025*sind(theta);
Window_in_y(1,4)     = Post_out1_y(12,1)-0.025*cosd(theta);

Window_in_x(1,[1 2]) = Window_in_x(1,[4 3])+0.60*cosd(theta);
Window_in_y(1,[1 2]) = Window_in_y(1,[4 3])-0.60*sind(theta);

Window_in_x(2,:)     = Window_in_x(1,:);
Window_in_y(2,:)     = Window_in_y(1,:);

Window_in_z(1,:)     = [0.00 1.35];
Window_in_z(2,:)     = [1.45 2.60];

Post_in_x(1,:)       = [Window_in_x(1,2) Window_in_x(2,1) Window_in_x(2,4) Window_in_x(1,3)];
Post_in_y(1,:)       = [Window_in_y(1,2) Window_in_y(2,1) Window_in_y(2,4) Window_in_y(1,3)];
Post_in_z(1,:)       = [1.35 1.45];

Wall_in_x(1,:)       = Window_in_x(1,:);
Wall_in_y(1,:)       = Window_in_y(1,:);
Wall_in_z(1,:)       = [2.60 3.00];


%% inner walls
% wall #2
Wall_in_x(2,3)       = Window_in_x(1,2);
Wall_in_y(2,3)       = Window_in_y(1,2);

Wall_in_x(2,4)       = Window_in_x(1,1);
Wall_in_y(2,4)       = Window_in_y(1,1);

Wall_in_x(2,[1 2])   = Wall_in_x(2,[4 3])+4.10*cosd(theta);
Wall_in_y(2,[1 2])   = Wall_in_y(2,[4 3])-4.10*sind(theta);
Wall_in_z(2,:)       = [0.00 3.00];

% wall #3
Wall_in_x(3,1)       = Wall_in_x(2,2);
Wall_in_y(3,1)       = Wall_in_y(2,2);

Wall_in_x(3,2)       = Wall_in_x(3,1)+0.50*sind(theta);
Wall_in_y(3,2)       = Wall_in_y(3,1)+0.50*cosd(theta);

Wall_in_x(3,[3 4])   = Wall_in_x(3,[2 1])-0.10*cosd(theta);
Wall_in_y(3,[3 4])   = Wall_in_y(3,[2 1])+0.10*sind(theta);
Wall_in_z(3,:)       = [0.00 3.00];

% wall #4
Wall_in_x(4,1)       = Wall_in_x(3,2)+0.85*sind(theta);
Wall_in_y(4,1)       = Wall_in_y(3,2)+0.85*cosd(theta);

Wall_in_x(4,2)       = Wall_in_x(4,1)+1.55*sind(theta);
Wall_in_y(4,2)       = Wall_in_y(4,1)+1.55*cosd(theta);

Wall_in_x(4,[3 4])   = Wall_in_x(4,[2 1])-0.10*cosd(theta);
Wall_in_y(4,[3 4])   = Wall_in_y(4,[2 1])+0.10*sind(theta);
Wall_in_z(4,:)       = [0.00 3.00];

% wall #5
Wall_in_x(5,1)       = Wall_in_x(4,2);
Wall_in_y(5,1)       = Wall_in_y(4,2);

Wall_in_y(5,4)       = 8.95;
Wall_in_x(5,4)       = polyval(polyfit([Wall_in_y(4,2) Wall_in_y(4,3)],[Wall_in_x(4,2) Wall_in_x(4,3)],1),Wall_in_y(5,4));

Wall_in_x(5,2)       = Wall_in_x(5,1)+0.10*sind(theta);
Wall_in_y(5,2)       = Wall_in_y(5,1)+0.10*cosd(theta);

Wall_in_y(5,3)       = 8.95;
Wall_in_x(5,3)       = Wall_in_x(5,4)+0.10/sind(theta);

Wall_in_z(5,:)       = [0.00 3.00];

% wall #6
Wall_in_x(6,1) = Wall_in_x(5,2);
Wall_in_y(6,1) = Wall_in_y(5,2);

Wall_in_x(6,4) = Wall_in_x(6,1)-0.10*cosd(theta);
Wall_in_y(6,4) = Wall_in_y(6,1)+0.10*sind(theta);

Wall_in_x(6,2) = Wall_in_x(6,1)+0.95*sind(theta);
Wall_in_y(6,2) = 8.95;

Wall_in_x(6,3) = Wall_in_x(6,2)-(0.10/cosd(theta));
Wall_in_y(6,3) = 8.95;
Wall_in_z(6,:) = [0.00 3.00];

% wall #7
Wall_in_x(7,2) = Wall_in_x(2,1);
Wall_in_y(7,2) = Wall_in_y(2,1);

Wall_in_x(7,3) = Wall_in_x(7,2)-0.10*cosd(theta);
Wall_in_y(7,3) = Wall_in_y(7,2)+0.10*sind(theta);

Wall_in_x(7,4) = Wall_in_x(7,3)-0.55*sind(theta);
Wall_in_y(7,4) = Wall_in_y(7,3)-0.55*cosd(theta);

Wall_in_x(7,1) = Wall_in_x(7,2)-(0.55-0.10*tand(theta))*sind(theta);
Wall_in_y(7,1) = Wall_in_y(7,2)-(0.55-0.10*tand(theta))*cosd(theta);

Wall_in_z(7,:) = [0.00 3.00];

% wall #8
Wall_in_x(8,[2 3]) = Wall_in_x(7,[1 4]);
Wall_in_y(8,[2 3]) = Wall_in_y(7,[1 4]);

Wall_in_x(8,[1 4]) = Wall_in_x(8,[2 3]);
Wall_in_y(8,[1 4]) = Wall_in_y(8,[2 3])-0.15;
Wall_in_z(8,:)     = [0.00 3.00];

% wall #9
Wall_in_x(9,[2 3]) = Wall_in_x(8,[1 4]);
Wall_in_y(9,[2 3]) = Wall_in_y(8,[1 4])-0.85;

Wall_in_x(9,[1 4]) = Wall_in_x(9,[2 3]);
Wall_in_y(9,[1 4]) = Wall_in_y(9,[2 3])-0.10;
Wall_in_z(9,:)     = [0.00 3.00];

% wall #10
Wall_in_x(10,3) = Wall_in_x(9,4);
Wall_in_y(10,3) = Wall_in_y(9,4);

Wall_in_x(10,4) = Wall_in_x(10,3);
Wall_in_y(10,4) = Wall_in_y(10,3)-0.10;

Wall_in_x(10,[1 2]) = Wall_in_x(10,[4 3])+1.90;
Wall_in_y(10,[1 2]) = Wall_in_y(10,[4 3]);
Wall_in_z(10,:)     = [0.00 3.00];

% wall #11
Wall_in_x(11,3) = Wall_in_x(10,4);
Wall_in_y(11,3) = Wall_in_y(10,4);

Wall_in_x(11,2) = Wall_in_x(11,3)+0.10;
Wall_in_y(11,2) = Wall_in_y(11,3);

Wall_in_x(11,[1 4]) = Wall_in_x(11,[2 3]);
Wall_in_y(11,[1 4]) = Wall_in_y(11,[2 3])-3.60;
Wall_in_z(11,:)     = [0.00 3.00];

% wall #12
Wall_in_x(12,[3 4]) = Wall_in_x(10,[2 1])+0.85;
Wall_in_x(12,[1 2]) = Wall_in_x(12,[4 3])+0.25;

Wall_in_y(12,:)     = Wall_in_y(10,:);
Wall_in_z(12,:)     = [0.00 3.00];

% wall #13
Wall_in_x(13,3) = Wall_in_x(12,2);
Wall_in_y(13,3) = Wall_in_y(12,2);

Wall_in_x(13,2) = Wall_in_x(13,3)+0.10;
Wall_in_y(13,2) = Wall_in_y(13,3);

Wall_in_x(13,[1 4]) = Wall_in_x(13,[2 3]);
Wall_in_y(13,[1 4]) = Wall_in_y(13,[2 3])-3.85;
Wall_in_z(13,:)     = [0.00 3.00];

% wall #14
Wall_in_x(14,[3 4]) = Wall_in_x(12,[2 1])+0.10;
Wall_in_x(14,[1 2]) = Wall_in_x(14,[4 3])+0.25;

Wall_in_y(14,:)     = Wall_in_y(12,:);
Wall_in_z(14,:)     = [0.00 3.00];

% wall #15
Wall_in_x(15,[3 4]) = Wall_in_x(14,[2 1])+0.85;
Wall_in_x(15,[1 2]) = Wall_in_x(15,[4 3])+5.15;

Wall_in_y(15,:)     = Wall_in_y(14,:);
Wall_in_z(15,:)     = [0.00 3.00];

% wall #16
Wall_in_x(16,[3 4]) = Wall_in_x(15,[2 1])+0.85;
Wall_in_x(16,[1 2]) = Wall_in_x(16,[4 3])+0.30;

Wall_in_y(16,:)     = Wall_in_y(15,:);
Wall_in_z(16,:)     = [0.00 3.00];

% wall #17
Wall_in_x(17,3) = Wall_in_x(16,2);
Wall_in_y(17,3) = Wall_in_y(16,2);

Wall_in_x(17,2) = Wall_in_x(17,3)+0.10;
Wall_in_y(17,2) = Wall_in_y(17,3);

Wall_in_x(17,[1 4]) = Wall_in_x(17,[2 3]);
Wall_in_y(17,[1 4]) = Wall_in_y(17,[2 3])-3.95;
Wall_in_z(17,:)     = [0.00 3.00];


%% doors
% door #1
Door_x(1,:) = [Wall_in_x(3,2) Wall_in_x(4,1) Wall_in_x(4,4) Wall_in_x(3,3)];
Door_y(1,:) = [Wall_in_y(3,2) Wall_in_y(4,1) Wall_in_y(4,4) Wall_in_y(3,3)];
Door_z(1,:) = [0.00 2.35];

Wall_in_x(18,:) = Door_x(1,:);
Wall_in_y(18,:) = Door_y(1,:);
Wall_in_z(18,:) = [2.35 3.00];

% door #2
Door_x(2,3:4) = Wall_in_x(9,3);
Door_x(2,1:2) = Door_x(2,4)+(Wall_in_y(8,1)-Wall_in_y(9,2));

Door_y(2,[1 4]) = Wall_in_y(9,3);
Door_y(2,[2 3]) = Door_y(2,4)+(Wall_in_x(9,2)-Wall_in_x(9,3));

Door_z(2,:) = [0.00 2.35];

% 
Wall_in_x(19,:) = [Wall_in_x(9,2) Wall_in_x(8,1) Wall_in_x(8,4) Wall_in_x(9,3)];
Wall_in_y(19,:) = [Wall_in_y(9,2) Wall_in_y(8,1) Wall_in_y(8,4) Wall_in_y(9,3)];
Wall_in_z(19,:) = [2.35 3.00];

% door #3
Door_x(3,:) = [Wall_in_x(12,4) Wall_in_x(12,3) Wall_in_x(10,2) Wall_in_x(10,1)];
Door_y(3,:) = [Wall_in_y(12,4) Wall_in_y(12,3) Wall_in_y(10,2) Wall_in_y(10,1)];
Door_z(3,:) = [0.00 2.35];

Wall_in_x(20,:) = Door_x(3,:);
Wall_in_y(20,:) = Door_y(3,:);
Wall_in_z(20,:) = [2.35 3.00];

% door #4
Door_x(4,:) = [Wall_in_x(15,4) Wall_in_x(15,3) Wall_in_x(14,2) Wall_in_x(14,1)];
Door_y(4,:) = [Wall_in_y(15,4) Wall_in_y(15,3) Wall_in_y(14,2) Wall_in_y(14,1)];
Door_z(4,:) = [0.00 2.35];

Wall_in_x(21,:) = Door_x(4,:);
Wall_in_y(21,:) = Door_y(4,:);
Wall_in_z(21,:) = [2.35 3.00];

% door #5
Door_x(5,:) = [Wall_in_x(16,4) Wall_in_x(16,3) Wall_in_x(15,2) Wall_in_x(15,1)];
Door_y(5,:) = [Wall_in_y(16,4) Wall_in_y(16,3) Wall_in_y(15,2) Wall_in_y(15,1)];
Door_z(5,:) = [0.00 2.35];

Wall_in_x(22,:) = Door_x(5,:);
Wall_in_y(22,:) = Door_y(5,:);
Wall_in_z(22,:) = [2.35 3.00];


%% inner windows
% window #2
Window_in_x(3,[1 2]) = Wall_in_x(11,1);
Window_in_x(3,[3 4]) = Wall_in_x(11,4);

Window_in_y(3,[2 3]) = Wall_in_y(11,1);
Window_in_y(3,[1 4]) = Wall_in_y(11,1)-0.60;

Window_in_x(4,:)     = Window_in_x(3,:);
Window_in_y(4,:)     = Window_in_y(3,:);

Window_in_z(3,:)     = [0.00 1.35];
Window_in_z(4,:)     = [1.45 2.60];

Post_in_x(2,:)       = [Window_in_x(3,2) Window_in_x(4,1) Window_in_x(4,4) Window_in_x(3,3)];
Post_in_y(2,:)       = [Window_in_y(3,2) Window_in_y(4,1) Window_in_y(4,4) Window_in_y(3,3)];
Post_in_z(2,:)       = [1.35 1.45];

Wall_in_x(23,:)      = Window_in_x(3,:);
Wall_in_y(23,:)      = Window_in_y(3,:);
Wall_in_z(23,:)      = [2.60 3.00];

% window #3
Window_in_x(5,[1 2]) = Wall_in_x(13,1);
Window_in_x(5,[3 4]) = Wall_in_x(13,4);

Window_in_y(5,[2 3]) = Wall_in_y(13,1);
Window_in_y(5,[1 4]) = Wall_in_y(13,1)-0.60;

Window_in_x(6,:)     = Window_in_x(5,:);
Window_in_y(6,:)     = Window_in_y(5,:);

Window_in_z(5,:)     = [0.00 1.35];
Window_in_z(6,:)     = [1.45 2.60];

Post_in_x(3,:)       = [Window_in_x(5,2) Window_in_x(6,1) Window_in_x(6,4) Window_in_x(5,3)];
Post_in_y(3,:)       = [Window_in_y(5,2) Window_in_y(6,1) Window_in_y(6,4) Window_in_y(5,3)];
Post_in_z(3,:)       = [1.35 1.45];

Wall_in_x(24,:)      = Window_in_x(5,:);
Wall_in_y(24,:)      = Window_in_y(5,:);
Wall_in_z(24,:)      = [2.60 3.00];

% window #4
Window_in_x(7,[1 2]) = Wall_in_x(17,1);
Window_in_x(7,[3 4]) = Wall_in_x(17,4);

Window_in_y(7,[2 3]) = Wall_in_y(17,1);
Window_in_y(7,[1 4]) = Wall_in_y(17,1)-0.60;

Window_in_x(8,:)     = Window_in_x(7,:);
Window_in_y(8,:)     = Window_in_y(7,:);

Window_in_z(7,:)     = [0.00 1.35];
Window_in_z(8,:)     = [1.45 2.60];

Post_in_x(4,:)       = [Window_in_x(7,2) Window_in_x(8,1) Window_in_x(8,4) Window_in_x(7,3)];
Post_in_y(4,:)       = [Window_in_y(7,2) Window_in_y(8,1) Window_in_y(8,4) Window_in_y(7,3)];
Post_in_z(4,:)       = [1.35 1.45];

Wall_in_x(25,:)      = Window_in_x(7,:);
Wall_in_y(25,:)      = Window_in_y(7,:);
Wall_in_z(25,:)      = [2.60 3.00];


%% outer window #2 (giving on the other building)
% metallic posts
i_x                  = [Window_out1_x(1,1) Window_in_x(3,1) Window_in_x(5,1) Window_in_x(7,1)];
i_y                  = [Window_out1_y(1,1) Window_in_y(3,1) Window_in_y(5,1) Window_in_y(7,1)];

% vertical metallic post
Post_out2_x(1,2)     = (Window_in_x(7,1)-0.025)-1.50*(13-1);
Post_out2_y(1,2)     = interp1(i_x,i_y,Post_out2_x(1,2),'spline');

Post_out2_x(1,3)     = Post_out2_x(1,2)-0.05;
Post_out2_y(1,3)     = Post_out2_y(1,2);

Post_out2_x(1,1)     = Post_out2_x(1,2);
Post_out2_y(1,1)     = Post_out2_y(1,2)-0.15;

Post_out2_x(1,4)     = Post_out2_x(1,3);
Post_out2_y(1,4)     = Post_out2_y(1,3)-0.15;

Post_out2_z(1,:) = [0.00 3.00];

% horizontal metallic post
Post_out2_x(2,:) = [Post_out2_x(1,4) Post_out2_x(1,3) Window_out1_x(1,1) Window_out1_x(1,4)];
Post_out2_y(2,:) = [Post_out2_y(1,4) Post_out2_y(1,3) Window_out1_y(1,1) Window_out1_y(1,4)];
Post_out2_z(2,:) = [1.35 1.45];

% window #1
Window_out2_x(1,:) = Post_out2_x(2,:);
Window_out2_y(1,:) = Post_out2_y(2,:); Window_out2_z(1,:) = [0.20 1.35];

Window_out2_x(2,:) = Post_out2_x(2,:);
Window_out2_y(2,:) = Post_out2_y(2,:); Window_out2_z(2,:) = [1.45 2.60];

% walls
Wall_out2_x(1,:) = Post_out2_x(2,:); Wall_out2_y(1,:) = Post_out2_y(2,:); Wall_out2_z(1,:) = [0.00 0.20];
Wall_out2_x(2,:) = Post_out2_x(2,:); Wall_out2_y(2,:) = Post_out2_y(2,:); Wall_out2_z(2,:) = [2.60 3.00];

for n = 2:13
    
    % vertical metallic posts
    Post_out2_x(2*n-1,2) = (Window_in_x(7,1)-0.025)-1.50*(13-n);
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    if (n == 6)
        Post_out2_y(2*n-1,2) = Wall_in_y(23,1);
    elseif (n == 8)
        Post_out2_y(2*n-1,2) = Wall_in_y(24,1);
    elseif (n == 13)
        Post_out2_y(2*n-1,2) = Wall_in_y(25,1);
    else
        Post_out2_y(2*n-1,2) = interp1(i_x,i_y,Post_out2_x(2*n-1,2),'spline');
    end
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    Post_out2_x(2*n-1,3) = Post_out2_x(2*n-1,2)-0.05;
    Post_out2_y(2*n-1,3) = Post_out2_y(2*n-1,2);
    
    Post_out2_x(2*n-1,1) = Post_out2_x(2*n-1,2);
    Post_out2_y(2*n-1,1) = Post_out2_y(2*n-1,2)-0.15;
    
    Post_out2_x(2*n-1,4) = Post_out2_x(2*n-1,3);
    Post_out2_y(2*n-1,4) = Post_out2_y(2*n-1,3)-0.15;
    
    Post_out2_z(2*n-1,:) = [0.00 3.00];
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    if (n == 6) || (n == 8) || (n == 13)
        Wall_in_x(end+1,2) = Post_out2_x(2*n-1,3);
        Wall_in_y(end+1,2) = Post_out2_y(2*n-1,3);
        
        if (n == 6)
            Wall_in_x(end,3) = Wall_in_x(23,4);
            Wall_in_y(end,3) = Wall_in_y(23,4);
        end
        if (n == 8)
            Wall_in_x(end,3) = Wall_in_x(24,4);
            Wall_in_y(end,3) = Wall_in_y(24,4);
        end
        if (n == 13)
            Wall_in_x(end,3) = Wall_in_x(25,4);
            Wall_in_y(end,3) = Wall_in_y(25,4);
        end
        
        Wall_in_x(end,1) = Wall_in_x(end,2);
        Wall_in_y(end,1) = Wall_in_y(end,2)-0.15;
        
        Wall_in_x(end,4) = Wall_in_x(end,3);
        Wall_in_y(end,4) = Wall_in_y(end,3)-0.15;
        
        Wall_in_z(end+1,:) = [0.00 3.00];
        
        if (n == 6)
            Wall_in_x(end+1,2) = Wall_in_x(23,1);
            Wall_in_y(end+1,2) = Wall_in_y(23,1);
        end
        if (n == 8)
            Wall_in_x(end+1,2) = Wall_in_x(24,1);
            Wall_in_y(end+1,2) = Wall_in_y(24,1);
        end
        if (n == 13)
            Wall_in_x(end+1,2) = Wall_in_x(25,1);
            Wall_in_y(end+1,2) = Wall_in_y(25,1);
        end
        
        Wall_in_x(end,3) = Post_out2_x(2*n-1,2);
        Wall_in_y(end,3) = Post_out2_y(2*n-1,2);
        
        Wall_in_x(end,1) = Wall_in_x(end,2);
        Wall_in_y(end,1) = Wall_in_y(end,2)-0.15;
        
        Wall_in_x(end,4) = Wall_in_x(end,3);
        Wall_in_y(end,4) = Wall_in_y(end,3)-0.15;
        
        Wall_in_z(end+1,:) = [0.00 3.00];
    end
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    % horizontal metallic posts
    if (n == 6) || (n == 8) || (n == 13)
        Post_out2_x(2*n,:) = [Wall_in_x(end-1,4) Wall_in_x(end-1,3) Post_out2_x(2*n-3,2) Post_out2_x(2*n-3,1)];
        Post_out2_y(2*n,:) = [Wall_in_y(end-1,4) Wall_in_y(end-1,3) Post_out2_y(2*n-3,2) Post_out2_y(2*n-3,1)];
    elseif (n == 7) || (n == 9)
        Post_out2_x(2*n,:) = [Post_out2_x(2*n-1,4) Post_out2_x(2*n-1,3) Wall_in_x(end,2) Wall_in_x(end,1)];
        Post_out2_y(2*n,:) = [Post_out2_y(2*n-1,4) Post_out2_y(2*n-1,3) Wall_in_y(end,2) Wall_in_y(end,1)];
    else
        Post_out2_x(2*n,:) = [Post_out2_x(2*n-1,4) Post_out2_x(2*n-1,3) Post_out2_x(2*n-3,2) Post_out2_x(2*n-3,1)];
        Post_out2_y(2*n,:) = [Post_out2_y(2*n-1,4) Post_out2_y(2*n-1,3) Post_out2_y(2*n-3,2) Post_out2_y(2*n-3,1)];
    end
    Post_out2_z(2*n,:) = [1.35 1.45];
    
    % windows
    Window_out2_x(2*n-1,:) = Post_out2_x(2*n,:);
    Window_out2_y(2*n-1,:) = Post_out2_y(2*n,:); Window_out2_z(2*n-1,:) = [0.20 1.35];
    
    Window_out2_x(2*n,:) = Post_out2_x(2*n,:);
    Window_out2_y(2*n,:) = Post_out2_y(2*n,:); Window_out2_z(2*n,:) = [1.45 2.60];
    
    % walls
    Wall_out2_x(end+1,:) = Window_out2_x(2*n,:); Wall_out2_y(end+1,:) = Window_out2_y(2*n,:); Wall_out2_z(end+1,:) = [0.00 0.20];
    Wall_out2_x(end+1,:) = Window_out2_x(2*n,:); Wall_out2_y(end+1,:) = Window_out2_y(2*n,:); Wall_out2_z(end+1,:) = [2.60 3.00];
end

Post_out2_x(27,3) = Wall_in_x(25,4);
Post_out2_y(27,3) = Wall_in_y(25,4);

Post_out2_x(27,4) = Post_out2_x(27,3);
Post_out2_y(27,4) = Post_out2_y(27,3)-0.15;

Post_out2_x(27,[1 2]) = Post_out2_x(27,[4 3])+0.10;
Post_out2_y(27,[1 2]) = Post_out2_y(27,[4 3]);

Post_out2_z(27,:) = [1.35 1.45];

Window_out2_x(27,:) = Post_out2_x(27,:);
Window_out2_y(27,:) = Post_out2_y(27,:); Window_out2_z(27,:) = [0.20 1.35];

Window_out2_x(28,:) = Post_out2_x(27,:);
Window_out2_y(28,:) = Post_out2_y(27,:); Window_out2_z(28,:) = [1.45 2.60];

Wall_out2_x(27,:) = Post_out2_x(27,:); Wall_out2_y(27,:) = Post_out2_y(27,:); Wall_out2_z(27,:) = [0.00 0.20];
Wall_out2_x(28,:) = Post_out2_x(27,:); Wall_out2_y(28,:) = Post_out2_y(27,:); Wall_out2_z(28,:) = [2.60 3.00];


%% inner walls
% wall #32
Wall_in_x(end+1,[1 2]) = Wall_in_x(17,[1 2]);
Wall_in_x(end,[3 4]) = Wall_in_x(end,[1 2])-3.20;

Wall_in_y(end+1,[2 3]) = Wall_in_y(16,2)+1.55;
Wall_in_y(end,[1 4]) = Wall_in_y(16,1)+1.50;

Wall_in_z(end+1,:)     = [0.00 3.00];

% wall #33
Wall_in_x(end+1,[1 2]) = Wall_in_x(end,[1 2]);
Wall_in_x(end,[3 4]) = Wall_in_x(end,[1 2])-1.20;

Wall_in_y(end+1,:) = Wall_in_y(end,:)+2.60;

Wall_in_z(end+1,:)     = [0.00 3.00];

% wall #34
Wall_in_x(end+1,[1 2]) = Wall_in_x(end,[4 3])-1.30;
Wall_in_x(end,[3 4]) = Wall_in_x(end,[1 2])-[1.85 2.40];

Wall_in_y(end+1,:) = Wall_in_y(end,:);

Wall_in_z(end+1,:)     = [0.00 3.00];

% wall #35
Wall_in_x(end+1,[3 4]) = Wall_in_x(32,3);
Wall_in_x(end,[1 2]) = Wall_in_x(end,3)+0.15;

Wall_in_y(end+1,[2 3]) = Wall_in_y(end,1);
Wall_in_y(end,[1 4]) = Wall_in_y(end,2)-0.50;

Wall_in_z(end+1,:)     = [0.00 3.00];

% wall #36
Wall_in_x(end+1,[1 2]) = Wall_in_x(34,1)-0.60;
Wall_in_x(end,[3 4]) = Wall_in_x(end,1)-0.20;

Wall_in_y(end+1,[1 4]) = Wall_in_y(34,2);
Wall_in_y(end,[2 3]) = 8.95;

Wall_in_z(end+1,:)     = [0.00 3.00];

% wall #37
Wall_in_x(end+1,[1 4]) = Wall_in_x(34,[3 4]);
Wall_in_y(end+1,[1 4]) = Wall_in_y(34,[3 4]);

Wall_in_y(end,[2 3]) = 8.95;
Wall_in_x(end,[2 3]) = Wall_in_x(end,[1 4])+(8.95-Wall_in_y(end,[1 4]))*tand(theta);

Wall_in_z(end+1,:)     = [0.00 3.00];

% wall #38
Wall_in_x(end+1,1) = Wall_in_x(37,4);
Wall_in_y(end+1,1) = Wall_in_y(37,4);

Wall_in_x(end,2) = Wall_in_x(end,1)+0.10*sind(theta);
Wall_in_y(end,2) = Wall_in_y(end,1)+0.10*cosd(theta);

Wall_in_x(end,4) = Wall_in_x(end,1)-1.90*cosd(theta);
Wall_in_y(end,4) = Wall_in_y(end,1)+1.90*sind(theta);

Wall_in_x(end,3) = Wall_in_x(end,2)-1.90*cosd(theta);
Wall_in_y(end,3) = Wall_in_y(end,2)+1.90*sind(theta);

Wall_in_z(end+1,:) = [0.00 3.00];

% wall #39
Wall_in_x(end+1,4) = Wall_in_x(end,3);
Wall_in_y(end+1,4) = Wall_in_y(end,3);

Wall_in_x(end,1) = Wall_in_x(end,4)+0.10*cosd(theta);
Wall_in_y(end,1) = Wall_in_y(end,4)-0.10*sind(theta);

Wall_in_x(end,[2 3]) = Wall_in_x(end,[1 4])+(8.95-Wall_in_y(end,[1 4]))*sind(theta);
Wall_in_y(end,[2 3]) = 8.95;

Wall_in_z(end+1,:)     = [0.00 3.00];


%% doors
Door_x(6,[1 2]) = Wall_in_x(35,1);
Door_x(6,[3 4]) = Wall_in_x(35,3);

Door_y(6,[2 3]) = Wall_in_y(35,1);
Door_y(6,[1 4]) = Door_y(6,[2 3])-1.40;

Door_z(6,:)     = [0.00 2.35];

% wall #40
Wall_in_x(end+1,:) = Door_x(6,:);
Wall_in_y(end+1,:) = Door_y(6,:); Wall_in_z(end+1,:) = [2.35 3.00];


%% inner metallic posts
Post_in_x(5,[1 2]) = Door_x(6,1); Post_in_y(5,[2 3]) = Door_y(6,1);
Post_in_x(5,[3 4]) = Door_x(6,3); Post_in_y(5,[1 4]) = Post_in_y(5,2)-0.10; Post_in_z(5,:) = [0.00 3.00];

Post_in_x(6,[1 2]) = Door_x(6,1); Post_in_y(6,[1 4]) = Wall_in_y(32,2);
Post_in_x(6,[3 4]) = Door_x(6,3); Post_in_y(6,[2 3]) = Post_in_y(6,1)+0.05; Post_in_z(6,:) = [0.00 3.00];


%% inner window
% window #11
Window_in_x(11,[1 2])  = Post_in_x(5,1);
Window_in_x(11,[3 4])  = Post_in_x(5,3);

Window_in_y(11,[2 3])  = Post_in_y(6,2);
Window_in_y(11,[1 4])  = Post_in_y(5,1);

Window_in_z(11,:)      = [0.00 3.00];


%% elevator
Window_in_x(9,[1 2])  = Wall_in_x(33,4);
Window_in_x(9,[3 4])  = Window_in_x(9,1)-0.15;

Window_in_y(9,[2 3])  = Wall_in_y(33,2);
Window_in_y(9,[1 4])  = Wall_in_y(33,1);

Window_in_z(9,:)      = [0.00 3.00];

Window_in_x(10,[3 4]) = Wall_in_x(34,1);
Window_in_x(10,[1 2]) = Window_in_x(10,4)+0.15;

Window_in_y(10,[2 3]) = Wall_in_y(34,2);
Window_in_y(10,[1 4]) = Wall_in_y(34,1);

Window_in_z(10,:)     = [0.00 3.00];


Elevator_x(1,[1 2])  = Window_in_x(9,3);
Elevator_x(1,[3 4])  = Window_in_x(10,1);

Elevator_y(1,[2 3])  = Wall_in_y(34,2);
Elevator_y(1,[1 4])  = Wall_in_y(34,1);

Elevator_z(1,:)      = [0.00 3.00];

%%%
Pillar_x(1,:)    = [1.475 1.475 1.225 1.225]*5/2.4;
Pillar_y(1,:)    = [0.315 0.565 0.565 0.315]*5/2.4;

Pillar_z(1,:)    = [0.00 3.00];

x0               = mean(Pillar_x(1,:));
y0               = mean(Pillar_y(1,:));

R                = [cosd(90+theta) sind(90+theta) ; -sind(90+theta) cosd(90+theta)];
P                = R*[Pillar_x(1,:)-x0 ; Pillar_y(1,:)-y0];

Pillar_x(1,:)    = P(1,:)+x0;
Pillar_y(1,:)    = P(2,:)+y0;

%%%
r1 = polyfit(Wall_in_x(2,[4 1])*coef_scale,Wall_in_y(2,[4 1])*coef_scale,1);
r2 = polyfit(Wall_in_x(2,[2 3])*coef_scale,Wall_in_y(2,[2 3])*coef_scale,1); r = [r1(1) (r1(2)+r2(2))/2];

s1 = polyfit([5.866 6.014],[6.560 6.821],1);
s2 = polyfit([6.126 6.275],[6.412 6.672],1); s = [s1(1) (s1(2)+s2(2))/2];

xx = linspace(6.000,6.500,1e4);
yy1 = polyval(r,xx);
yy2 = polyval(s,xx); [~,ind] = min(abs(yy1-yy2));

x = (xx(1,ind)+0.025)-0.2605*sind(90-theta);
y = polyval(r,x);

x3 = x+0.2605*sind(theta); y3 = y+0.2605*cosd(theta);
x4 = x-0.2605*sind(theta); y4 = y-0.2605*cosd(theta);

x = (xx(1,ind)+0.025)+0.2605*sind(90-theta);
y = polyval(r,x);

x1 = x-0.2605*sind(theta); y1 = y-0.2605*cosd(theta);
x2 = x+0.2605*sind(theta); y2 = y+0.2605*cosd(theta);

Pillar_x(2,:)    = [x1 x2 x3 x4];
Pillar_y(2,:)    = [y1 y2 y3 y4];

Pillar_z(2,:)    = [0.00 3.00];


%%%
Wall_in_x(end+1,:) = Wall_in_x(2,:);
Wall_in_y(end+1,:) = Wall_in_y(2,:);
Wall_in_z(end+1,:) = Wall_in_z(2,:);

x = linspace(6.4,6.8,1e4);
t  = polyfit(Pillar_x(2,[1 2]),Pillar_y(2,[1 2]),1);
tx = polyval(t,x);

u  = polyfit(Wall_in_x(2,[2 3])*coef_scale,Wall_in_y(2,[2 3])*coef_scale,1);
ux = polyval(u,x); [~,ind] = min(abs(tx-ux));

Wall_in_x(2,3) = x(1,ind)/coef_scale;
Wall_in_y(2,3) = ux(1,ind)/coef_scale;

u  = polyfit(Wall_in_x(2,[1 4])*coef_scale,Wall_in_y(2,[1 4])*coef_scale,1);
ux = polyval(u,x); [~,ind] = min(abs(tx-ux));

Wall_in_x(2,4) = x(1,ind)/coef_scale;
Wall_in_y(2,4) = ux(1,ind)/coef_scale;

%%%
x = linspace(5.9,6.3,1e4);
t  = polyfit(Pillar_x(2,[3 4]),Pillar_y(2,[3 4]),1);
tx = polyval(t,x);

u  = polyfit(Wall_in_x(end,[2 3])*coef_scale,Wall_in_y(end,[2 3])*coef_scale,1);
ux = polyval(u,x); [~,ind] = min(abs(tx-ux));

Wall_in_x(end,2) = x(1,ind)/coef_scale;
Wall_in_y(end,2) = ux(1,ind)/coef_scale;

u  = polyfit(Wall_in_x(end,[1 4])*coef_scale,Wall_in_y(end,[1 4])*coef_scale,1);
ux = polyval(u,x); [~,ind] = min(abs(tx-ux));

Wall_in_x(end,1) = x(1,ind)/coef_scale;
Wall_in_y(end,1) = ux(1,ind)/coef_scale;
%%%

%%%
Desk_x(1,:) = [ 2.75  2.75  2.45  2.45];
Desk_y(1,:) = [-2.65 -1.85 -1.85 -2.65]; Desk_z(1,:) = [0.90 0.925];

Desk_x(2,:) = [ 5.05  5.05  4.75  4.75];
Desk_y(2,:) = [-2.65 -1.85 -1.85 -2.65]; Desk_z(2,:) = [0.90 0.925];

Desk_x(3,:) = [ 4.75  4.75  3.80  3.80];
Desk_y(3,:) = [-4.675 -0.35 -0.35 -4.675]; Desk_z(3,:) = [0.90 0.925];

Desk_x(4,:) = [ 3.70  3.70  2.75  2.75];
Desk_y(4,:) = [-4.675 -0.35 -0.35 -4.675]; Desk_z(4,:) = [0.90 0.925];

Desk_x(5,:) = [ 3.80  3.80  3.70  3.70];
Desk_y(5,:) = [-4.675 -2.65 -2.65 -4.675]; Desk_z(5,:) = [0.925 1.225];

Desk_x(6,:) = [ 3.80  3.80  3.70  3.70];
Desk_y(6,:) = [-1.85 -0.35 -0.35 -1.85]; Desk_z(6,:) = [0.925 1.225];

Desk_x(7,:) = [ 3.80  3.80  3.70  3.70];
Desk_y(7,:) = [-2.65 -1.85 -1.85 -2.65]; Desk_z(7,:) = [0.90 0.925];

Desk_x(8,:) = [ 0.775  0.775  0.025  0.025];
Desk_y(8,:) = [-2.575 -1.875 -1.875 -2.575]; Desk_z(8,:) = [0.90 0.925];

Desk_x(9,:) = [ 0.825  0.825  0.025  0.025];
Desk_y(9,:) = [-4.675 -3.125 -3.125 -4.675]; Desk_z(9,:) = [0.90 0.925];

Desk_x(10,:) = [ 8.575  8.575  7.825  7.825];
Desk_y(10,:) = [-4.675 -4.225 -4.225 -4.675]; Desk_z(10,:) = [0.90 0.925];


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Desk_x(11,:) = Desk_x(9,:)+(-0.0773*2-Desk_x(9,1)-Desk_x(9,3));
Desk_y(11,:) = Desk_y(9,:);
Desk_z(11,:) = Desk_z(9,:);

Desk_x(12,:) = Desk_x(8,:)+(-0.0773*2-Desk_x(8,1)-Desk_x(8,3));
Desk_y(12,:) = Desk_y(8,:);
Desk_z(12,:) = Desk_z(8,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



R = [cosd(90+theta) sind(90+theta) ; -sind(90+theta) cosd(90+theta)];

for i = 1:size(Desk_x,1)
    P = R*[Desk_x(i,:) ; Desk_y(i,:)];
    Desk_x(i,:)    = P(1,:)+8.7690; % (OR): starting point of the sampled measurement grid (must be defined outside all blocks)
    Desk_y(i,:)    = P(2,:)+5.5950;
end

%%%
n = 8;
r = polyfit(Window_out2_x(n,[3 2])*coef_scale,Window_out2_y(n,[3 2])*coef_scale,1); r(2) = r(2)+0.025;

T = atand(diff(Window_out2_y(n,[3 2]))/diff(Window_out2_x(n,[3 2])));
cst = sqrt(diff(Window_out2_y(n,[3 2])*coef_scale)^2+diff(Window_out2_x(n,[3 2])*coef_scale)^2)-1.68;

x1 = Window_out2_x(n,1)*coef_scale-(cst/2)*cosd(T); y1 = polyval(r,x1);
x4 = Window_out2_x(n,4)*coef_scale+(cst/2)*cosd(T); y4 = polyval(r,x4);

x2 = x1-0.525*sind(T); y2 = y1+0.525*cosd(T);
x3 = x4-0.525*sind(T); y3 = y4+0.525*cosd(T);

Desk_x(13,:) = [x1 x2 x3 x4];
Desk_y(13,:) = [y1 y2 y3 y4]; Desk_z(13,:) = [0.90 0.925];
%%%

%%%
x3 = x2; y3 = y2;
x4 = x1; y4 = y1;

n = 10;
r = polyfit(Window_out2_x(n,[3 2])*coef_scale,Window_out2_y(n,[3 2])*coef_scale,1); r(2) = r(2)+0.025;

T = atand(diff(Window_out2_y(n,[3 2]))/diff(Window_out2_x(n,[3 2])));

x1 = Window_out2_x(n,1)*coef_scale;
y1 = polyval(r,x1);

x2 = x1-0.525*sind(T);
y2 = y1+0.525*cosd(T);

Desk_x(14,:) = [x1 x2 x3 x4];
Desk_y(14,:) = [y1 y2 y3 y4]; Desk_z(14,:) = [0.90 0.925];
%%%

%%%
Heater_x(1,:) = [ 2.600  2.600  1.800  1.800];
Heater_y(1,:) = [-4.675 -4.425 -4.425 -4.675]; Heater_z(1,:) = [0.00 0.25];

Heater_x(2,:) = [ 5.700  5.700  4.800  4.800];
Heater_y(2,:) = [-4.675 -4.425 -4.425 -4.675]; Heater_z(2,:) = [0.00 0.25];

for i = 1:size(Heater_x,1)
    P = R*[Heater_x(i,:) ; Heater_y(i,:)];
    Heater_x(i,:)    = P(1,:)+8.7690;
    Heater_y(i,:)    = P(2,:)+5.5950;
end

%%%
n = 8;
r = polyfit(Window_out2_x(n,[3 2])*coef_scale,Window_out2_y(n,[3 2])*coef_scale,1); r(2) = r(2)+0.025;

T = atand((-0.2948+0.405)/(3.965-5.444));
cst = sqrt((3.965-5.444).^2+(-0.2948+0.405).^2)-0.80;

x1 = Window_out2_x(n,1)*coef_scale-(cst/2)*cosd(T); y1 = polyval(r,x1);
x4 = Window_out2_x(n,4)*coef_scale+(cst/2)*cosd(T); y4 = polyval(r,x4);

x2 = x1-0.25*sind(T); y2 = y1+0.25*cosd(T);
x3 = x4-0.25*sind(T); y3 = y4+0.25*cosd(T);

Heater_x(3,:) = [x1 x2 x3 x4];
Heater_y(3,:) = [y1 y2 y3 y4]; Heater_z(3,:) = [0.00 0.25];
%%%

%%%
n = 11;
r = polyfit(Window_out2_x(n,[3 2])*coef_scale,Window_out2_y(n,[3 2])*coef_scale,1); r(2) = r(2)+0.025;

T = atand((-0.3549+0.4501)/(7.025-8.478));
cst = sqrt((7.025-8.478).^2+(-0.3549+0.4501).^2)-0.80;

x1 = Window_out2_x(n,1)*coef_scale-(cst/2)*cosd(T); y1 = polyval(r,x1);
x4 = Window_out2_x(n,4)*coef_scale+(cst/2)*cosd(T); y4 = polyval(r,x4);

x2 = x1-0.25*sind(T); y2 = y1+0.25*cosd(T);
x3 = x4-0.25*sind(T); y3 = y4+0.25*cosd(T);

Heater_x(4,:) = [x1 x2 x3 x4];
Heater_y(4,:) = [y1 y2 y3 y4]; Heater_z(4,:) = [0.00 0.25];
%%%

%%%
n = 4;
T = atand(diff(Window_out2_y(n,[3 2]))/diff(Window_out2_x(n,[3 2])));
r = polyfit(Window_out2_x(n,[3 2])*coef_scale,Window_out2_y(n,[3 2])*coef_scale,1); r(2) = r(2)+0.025;

x1 = Window_out2_x(n,1)*coef_scale-0.10;
y1 = polyval(r,x1);

x2 = x1-0.25*sind(T); y2 = y1+0.25*cosd(T);
x4 = x1-0.80*cosd(T); y4 = y1-0.80*sind(T);
x3 = x4-0.25*sind(T); y3 = y4+0.25*cosd(T);

Heater_x(5,:) = [x1 x2 x3 x4];
Heater_y(5,:) = [y1 y2 y3 y4]; Heater_z(5,:) = [0.00 0.25];
%%%

%%%
Armoire_x(1,:) = [8.453 8.453 8.168 8.168];
Armoire_y(1,:) = [0.174 3.380 3.380 0.174]; Armoire_z(1,:) = [0.00 2.50];

Door_Armoire_x(1,:) = [8.168 8.168 8.138 8.138];
Door_Armoire_y(1,:) = [0.174 3.380 3.380 0.174]; Door_Armoire_z(1,:) = [0.00 2.50];

%%%
n = 6;
r = polyfit(Window_out2_x(n,[3 2])*coef_scale,Window_out2_y(n,[3 2])*coef_scale,1); r(2) = r(2)+0.025;

T = atand(diff(Window_out2_y(n,[3 2]))/diff(Window_out2_x(n,[3 2])));
cst = sqrt((3.965-5.444)^2+(-0.2948+0.405)^2)-1.15;

x1 = Window_out2_x(n,1)*coef_scale-(cst/2)*cosd(T); y1 = polyval(r,x1);
x4 = Window_out2_x(n,4)*coef_scale+(cst/2)*cosd(T); y4 = polyval(r,x4);

x2 = x1-0.35*sind(T); y2 = y1+0.35*cosd(T);
x3 = x4-0.35*sind(T); y3 = y4+0.35*cosd(T);

Armoire_x(2,:) = [x1 x2 x3 x4];
Armoire_y(2,:) = [y1 y2 y3 y4]; Armoire_z(2,:) = [0.00 1.75];
%%%



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Armoire_x(3,:) = [Door_x(4,1)+0.15 Door_x(4,1)+0.15 Door_x(5,3)-0.15 Door_x(5,3)-0.15]*coef_scale;
Armoire_y(3,:) = [Door_y(4,1)-0.30 Door_y(4,1) Door_y(4,1) Door_y(4,1)-0.30]*coef_scale-0.025;
Armoire_z(3,:) = [0.00 2.80];

Desk_x(15,[1 2]) = Armoire_x(3,1)+1.5*(Armoire_x(3,3)-Armoire_x(3,1))/4;
Desk_x(15,[3 4]) = Armoire_x(3,1)+3.5*(Armoire_x(3,3)-Armoire_x(3,1))/4;

Desk_y(15,:) = [1 2 2 1]; Desk_z(15,:) = [0.90 0.925];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
wi_4(1,:) = [9.4276 10.1955 10.1087 9.3407]*coef_scale;
wi_4(2,:) = [6.7394 8.0858 8.1353 6.7889]*coef_scale;
wi_4 = R\(wi_4-repmat([8.769 ; 5.595],1,4));

wi_5(1,:) = [10.1955 10.2451 8.8822 8.6803]*coef_scale;
wi_5(2,:) = [8.0858 8.1726 8.9500 8.9500]*coef_scale;
wi_5 = R\(wi_5-repmat([8.769 ; 5.595],1,4));

r_5 = polyfit(wi_5(1,3:4),wi_5(2,3:4),1);

Desk_x(16,:) = [-1.75 wi_4(1,3)+0.025 wi_4(1,3)+0.025 -1.75];
Desk_y(16,:) = [wi_4(2,3)-0.015 wi_4(2,3)-0.015 polyval(r_5,Desk_x(16,3:4))];
Desk_z(16,:) = [0.90 0.925];

d_16(1,:) = Desk_x(16,:);
d_16(2,:) = Desk_y(16,:); d_16 = R*d_16+repmat([8.769 ; 5.595],1,4);

Desk_x(16,:) = d_16(1,:);
Desk_y(16,:) = d_16(2,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Etageres
Etageres_x(1,:) = Desk_x(16,:);
Etageres_y(1,:) = Desk_y(16,:); Etageres_z(1,:) = [1.30 1.35];

Etageres_x(2,:) = Desk_x(16,:);
Etageres_y(2,:) = Desk_y(16,:); Etageres_z(2,:) = [1.60 1.65];

Etageres_x(3,:) = Desk_x(16,:);
Etageres_y(3,:) = Desk_y(16,:); Etageres_z(3,:) = [1.90 1.95];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
r14 = polyfit(Window_out2_x(14,2:3)*coef_scale,Window_out2_y(14,2:3)*coef_scale,1);
r16 = polyfit(Window_out2_x(16,2:3)*coef_scale,Window_out2_y(16,2:3)*coef_scale,1);

alpha14 = abs(atand(diff(Window_out2_y(14,2:3))/diff(Window_out2_x(14,2:3))));
alpha16 = abs(atand(diff(Window_out2_y(16,2:3))/diff(Window_out2_x(16,2:3))));

Desk_x(17,1) = 11.45;
Desk_y(17,1) = polyval(r16,Desk_x(17,1))+0.025*cosd(alpha16);

Desk_x(17,2) = Desk_x(17,1)+0.5*sind(alpha16);
Desk_y(17,2) = Desk_y(17,1)+0.5*cosd(alpha16);

Desk_x(17,3) = 9.6;
Desk_y(17,3) = polyval(r14,Desk_x(17,3))+0.025*cosd(alpha14);

Desk_x(17,4) = Desk_x(17,3)+0.5*sind(alpha14);
Desk_y(17,4) = Desk_y(17,3)+0.5*cosd(alpha14);

Desk_z(17,:) = [0.90 0.925];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



%%%
d  = sqrt((Heater_x(1,2)-Heater_x(1,3))^2+(Heater_y(1,2)-Heater_y(1,3))^2);

xc = Heater_x(1,2)+(d/2)*sind(theta);
yc = Heater_y(1,2)+(d/2)*cosd(theta);

x3 = xc+0.15*sind(theta); x3 = x3+0.30*sind(90-theta);
y3 = yc+0.15*cosd(theta); y3 = y3-0.30*cosd(90-theta);

x4 = xc-0.15*sind(theta); x4 = x4+0.30*sind(90-theta);
y4 = yc-0.15*cosd(theta); y4 = y4-0.30*cosd(90-theta);

r = polyfit(Wall_in_x(2,[1 4])*coef_scale,Wall_in_y(2,[1 4])*coef_scale,1);

x2 = x3+4.00*sind(90-theta); y3_tilde = polyval(r,x3); r3 = [r(1) r(2)-(y3_tilde-y3)]; y2 = polyval(r3,x2);
x1 = x4+4.00*sind(90-theta); y4_tilde = polyval(r,x4); r4 = [r(1) r(2)-(y4_tilde-y4)]; y1 = polyval(r4,x1);

Light_x(1,:) = [x1 x2 x3 x4];
Light_y(1,:) = [y1 y2 y3 y4]; Light_z(1,:) = [2.75 2.85];
%%%

%%%
d  = sqrt((Heater_x(2,2)-Heater_x(2,3))^2+(Heater_y(2,2)-Heater_y(2,3))^2);

xc = Heater_x(2,2)+(d/2)*sind(theta);
yc = Heater_y(2,2)+(d/2)*cosd(theta);

x3 = xc+0.15*sind(theta); x3 = x3+0.30*sind(90-theta);
y3 = yc+0.15*cosd(theta); y3 = y3-0.30*cosd(90-theta);

x4 = xc-0.15*sind(theta); x4 = x4+0.30*sind(90-theta);
y4 = yc-0.15*cosd(theta); y4 = y4-0.30*cosd(90-theta);

r = polyfit(Wall_in_x(2,[1 4])*coef_scale,Wall_in_y(2,[1 4])*coef_scale,1);

x2 = x3+4.00*sind(90-theta); y3_tilde = polyval(r,x3); r3 = [r(1) r(2)-(y3_tilde-y3)]; y2 = polyval(r3,x2);
x1 = x4+4.00*sind(90-theta); y4_tilde = polyval(r,x4); r4 = [r(1) r(2)-(y4_tilde-y4)]; y1 = polyval(r4,x1);

Light_x(2,:) = [x1 x2 x3 x4];
Light_y(2,:) = [y1 y2 y3 y4]; Light_z(2,:) = [2.75 2.85];
%%%

% %%%
% Light_x(3,:) = [ 8.4605 8.4605 8.1605  8.1605];
% Light_y(3,:) = [-0.250 2.650 2.650 -0.250]; Light_z(3,:) = [2.75 2.85];
% %%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Other offices
Pillar_x(3,:) = Pillar_x(1,:)+((Wall_in_x(13,1)+Wall_in_x(13,3))*coef_scale/2-(Pillar_x(1,2)+Pillar_x(1,4))/2);
Pillar_y(3,:) = Pillar_y(1,:);
Pillar_z(3,:) = Pillar_z(1,:);

r34 = polyfit(Pillar_x(3,3:4),Pillar_y(3,3:4),1);
y34 = polyval(r34,Wall_in_x(13,[3 2])*coef_scale)/coef_scale;

r12 = polyfit(Pillar_x(3,1:2),Pillar_y(3,1:2),1);
y12 = polyval(r12,Wall_in_x(13,[3 2])*coef_scale)/coef_scale;

Wall_in_x(end+1,:) = Wall_in_x(13,:);
Wall_in_y(end+1,:) = Wall_in_y(13,:);
Wall_in_z(end+1,:) = Wall_in_z(13,:);

Wall_in_y(13,[4 1]) = y34;
Wall_in_y(end,[3 2]) = y12;


Pillar_x(4,:) = Pillar_x(1,:)+(Wall_in_x(17,1)+Wall_in_x(17,3))*coef_scale/2-(Pillar_x(1,2)+Pillar_x(1,4))/2;
Pillar_y(4,:) = Pillar_y(1,:);
Pillar_z(4,:) = Pillar_z(1,:);

r34 = polyfit(Pillar_x(4,3:4),Pillar_y(4,3:4),1);
y34 = polyval(r34,Wall_in_x(17,[3 2])*coef_scale)/coef_scale;

r12 = polyfit(Pillar_x(4,1:2),Pillar_y(4,1:2),1);
y12 = polyval(r12,Wall_in_x(17,[3 2])*coef_scale)/coef_scale;

Wall_in_x(end+1,:) = Wall_in_x(17,:);
Wall_in_y(end+1,:) = Wall_in_y(17,:);
Wall_in_z(end+1,:) = Wall_in_z(17,:);

Wall_in_y(17,[4 1]) = y34;
Wall_in_y(end,[3 2]) = y12;

Armoire_x(4,:) = [Wall_in_x(17,4) Wall_in_x(17,4) Wall_in_x(17,4)-0.25 Wall_in_x(17,4)-0.25]*coef_scale-0.025;
Armoire_y(4,:) = [Wall_in_y(17,4)+0.10 Wall_in_y(16,1)-0.30 Wall_in_y(16,1)-0.30 Wall_in_y(17,4)+0.10]*coef_scale;
Armoire_z(4,:) = [0.00 2.80];

%%% 
alpha = abs(atand(diff(Window_out2_y(25,2:3))/diff(Window_out2_x(25,2:3))));

r = polyfit(Window_out2_x(25,2:3)*coef_scale,Window_out2_y(25,2:3)*coef_scale,1);

Armoire_x(5,1) = Post_out2_x(27,4)*coef_scale-0.025;
Armoire_y(5,1) = polyval(r,Armoire_x(5,1))+0.025;

Armoire_x(5,2) = Armoire_x(5,1)-0.25*sind(alpha);
Armoire_y(5,2) = Armoire_y(5,1)+0.25*cosd(alpha);

Armoire_x(5,4) = Window_out2_x(25,3)*coef_scale;
Armoire_y(5,4) = polyval(r,Armoire_x(5,4))+0.025;

Armoire_x(5,3) = Armoire_x(5,4)-0.25*sind(alpha);
Armoire_y(5,3) = Armoire_y(5,4)+0.25*cosd(alpha);

Armoire_z(5,:) = [0.00 1.20];


Door_Armoire_x(5,:) = [Armoire_x(5,2) Armoire_x(5,2)-0.03*sind(alpha) Armoire_x(5,3)-0.03*sind(alpha) Armoire_x(5,3)];
Door_Armoire_y(5,:) = [Armoire_y(5,2) Armoire_y(5,2)+0.03*cosd(alpha) Armoire_y(5,3)+0.03*cosd(alpha) Armoire_y(5,3)];
Door_Armoire_z(5,:) = Armoire_z(5,:);


%%% 
alpha = abs(tand(diff(Post_out2_y(24,[3 2]))/diff(Post_out2_x(24,[3 2]))));
delta_x = (diff(Post_out2_x(24,[3 2]))*coef_scale-0.90)/2;

Heater_x(6,1) = Post_out2_x(24,2)*coef_scale-delta_x-0.025*sind(alpha);
Heater_x(6,4) = Post_out2_x(24,3)*coef_scale+delta_x-0.025*sind(alpha);

Heater_x(6,2) = Heater_x(6,1)-0.25*sind(alpha);
Heater_x(6,3) = Heater_x(6,4)-0.25*sind(alpha);

r = polyfit(Post_out2_x(24,2:3)*coef_scale,Post_out2_y(24,2:3)*coef_scale,1);

Heater_y(6,[1 4]) = polyval([r(1) r(2)+0.025],Heater_x(6,[1 4]));
Heater_y(6,[2 3]) = polyval([r(1) r(2)+0.275],Heater_x(6,[2 3]));

Heater_z(6,:) = [0.00 0.25];




alpha = abs(tand(diff(Post_out2_y(20,[3 2]))/diff(Post_out2_x(20,[3 2]))));
delta_x = (diff(Post_out2_x(20,[3 2]))*coef_scale-0.90)/2;

Heater_x(7,1) = Post_out2_x(20,2)*coef_scale-delta_x+0.025*sind(alpha);
Heater_x(7,4) = Post_out2_x(20,3)*coef_scale+delta_x+0.025*sind(alpha);

Heater_x(7,2) = Heater_x(7,1)+0.25*sind(alpha);
Heater_x(7,3) = Heater_x(7,4)+0.25*sind(alpha);

r = polyfit(Post_out2_x(20,2:3)*coef_scale,Post_out2_y(20,2:3)*coef_scale,1);

Heater_y(7,[1 4]) = polyval([r(1) r(2)+0.025],Heater_x(7,[1 4]));
Heater_y(7,[2 3]) = polyval([r(1) r(2)+0.275],Heater_x(7,[2 3]));

Heater_z(7,:) = [0.00 0.25];


alpha = abs(tand(diff(Post_out2_y(16,[3 2]))/diff(Post_out2_x(16,[3 2]))));
delta_x = (diff(Post_out2_x(16,[3 2]))*coef_scale-0.90)/2;

Heater_x(8,1) = Post_out2_x(16,2)*coef_scale-delta_x+0.025*sind(alpha);
Heater_x(8,4) = Post_out2_x(16,3)*coef_scale+delta_x+0.025*sind(alpha);

Heater_x(8,2) = Heater_x(8,1)+0.25*sind(alpha);
Heater_x(8,3) = Heater_x(8,4)+0.25*sind(alpha);

r = polyfit(Post_out2_x(16,2:3)*coef_scale,Post_out2_y(16,2:3)*coef_scale,1);

Heater_y(8,[1 4]) = polyval([r(1) r(2)+0.025],Heater_x(8,[1 4]));
Heater_y(8,[2 3]) = polyval([r(1) r(2)+0.275],Heater_x(8,[2 3]));

Heater_z(8,:) = [0.00 0.25];



Light_x(3,:) = mean(Heater_x(8,:))+[0.15 0.15 -0.15 -0.15];
Light_y(3,:) = Door_y(3,1)-0.15-[4 0 0 4];
Light_z(3,:) = [2.75 2.85];

Light_x(4,:) = mean(Heater_x(7,:))+[0.15 0.15 -0.15 -0.15];
Light_y(4,:) = Door_y(3,1)-0.15-[4 0 0 4];
Light_z(4,:) = [2.75 2.85];

Light_x(5,:) = mean(Heater_x(6,:))+[0.15 0.15 -0.15 -0.15];
Light_y(5,:) = Door_y(3,1)-0.15-[4 0 0 4];
Light_z(5,:) = [2.75 2.85];

Light_x(6,:) = [-0.3378-0.05 -0.3378-0.05-0.3 -0.3378-0.05-0.3 -0.3378-0.05];
Light_y(6,:) = [-0.05 -0.05 -4.692+0.05 -4.692+0.05];
Light_z(6,:) = [2.75 2.85];

l_xy = [Light_x(6,:) ; Light_y(6,:)];
l_xy = R*l_xy+repmat([8.769 ; 5.595],1,4);

Light_x(6,:) = l_xy(1,:);
Light_y(6,:) = l_xy(2,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
alpha = abs(atand(diff(Wall_in_y(38,[3 2]))/diff(Wall_in_x(38,[3 2]))));

Armoire_x(6,:) = [Wall_in_x(38,1)-0.25*cosd(alpha) Wall_in_x(38,1) Wall_in_x(38,4) Wall_in_x(38,4)-0.25*cosd(alpha)]*coef_scale;
Armoire_y(6,:) = [Wall_in_y(38,1)-0.25*sind(alpha) Wall_in_y(38,1) Wall_in_y(38,4) Wall_in_y(38,4)-0.25*sind(alpha)]*coef_scale;
Armoire_z(6,:) = [0.0 1.7];

Door_Armoire_x(2,:) = [Armoire_x(6,1)-0.03*cosd(alpha) Armoire_x(6,1) Armoire_x(6,4) Armoire_x(6,4)-0.03*cosd(alpha)];
Door_Armoire_y(2,:) = [Armoire_y(6,1)-0.03*sind(alpha) Armoire_y(6,1) Armoire_y(6,4) Armoire_y(6,4)-0.03*sind(alpha)];
Door_Armoire_z(2,:) = Armoire_z(6,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Broyeuse
Armoire_x(7,:) = (Wall_in_x(36,4)+Wall_in_x(37,4))*coef_scale/2+[0.5 0.5 -0.5 -0.5];
Armoire_y(7,:) = Wall_in_y(37,4)*coef_scale+[-0.53 -0.03 -0.03 -0.53];
Armoire_z(7,:) = [0 1];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Cloison
Wall_in_x(end+1,:) = [Post_in_x(5,4) Post_in_x(5,4) Wall_in_x(34,4) Wall_in_x(34,4)]-0.03;
Wall_in_y(end+1,:) = Post_in_y(5,:);
Wall_in_z(end+1,:) = [0 1.7];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
r = polyfit(Wall_in_x(4,1:2)*coef_scale,Wall_in_y(4,1:2)*coef_scale,1);

Armoire_x(8,4) = (Wall_in_x(4,1)+(Wall_in_x(4,2)-Wall_in_x(4,1))/4)*coef_scale+0.03*cosd(theta);
Armoire_y(8,4) = polyval(r,Armoire_x(8,4))-0.03*sind(theta);

r = polyfit(Wall_in_x(6,1:2)*coef_scale,Wall_in_y(6,1:2)*coef_scale,1);

Armoire_x(8,3) = (Wall_in_x(6,1)+(Wall_in_x(6,2)-Wall_in_x(6,1))/4)*coef_scale+0.03*cosd(theta);
Armoire_y(8,3) = polyval(r,Armoire_x(8,3))-0.03*sind(theta);

Armoire_x(8,1) = Armoire_x(8,4)+0.50*cosd(theta);
Armoire_y(8,1) = Armoire_y(8,4)-0.50*sind(theta);

Armoire_x(8,2) = Armoire_x(8,3)+0.50*cosd(theta);
Armoire_y(8,2) = Armoire_y(8,3)-0.50*sind(theta);

Armoire_z(8,:) = [0 1.2];

Door_Armoire_x(3,:) = [Armoire_x(8,1)+0.03*cosd(theta) Armoire_x(8,2)+0.03*cosd(theta) Armoire_x(8,2) Armoire_x(8,1)];
Door_Armoire_y(3,:) = [Armoire_y(8,1)-0.03*sind(theta) Armoire_y(8,2)-0.03*sind(theta) Armoire_y(8,2) Armoire_y(8,1)];
Door_Armoire_z(3,:) = Armoire_z(8,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Armoire_x(9,:) = [0.775+(-0.0773*2-0.775-0.025) -0.5 -0.5 0.775+(-0.0773*2-0.775-0.025)];
Armoire_y(9,:) = [-0.015 -0.015 -1.875+0.075 -1.875+0.075];
Armoire_z(9,:) = [0 2.2];

a_xy = [Armoire_x(9,:) ; Armoire_y(9,:)];

a_xy = R*a_xy+repmat([8.769 ; 5.595],1,4);

Armoire_x(9,:) = a_xy(1,:);
Armoire_y(9,:) = a_xy(2,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Armoire_x(10,:) = [Wall_in_x(13,3)*coef_scale-0.025 Wall_in_x(13,3)*coef_scale-0.025 Wall_in_x(13,3)*coef_scale-0.025-0.30 Wall_in_x(13,3)*coef_scale-0.025-0.30];
Armoire_y(10,:) = [Pillar_y(3,4)+0.05 3.35 3.35 Pillar_y(3,4)+0.05];
Armoire_z(10,:) = [0 1.2];

Door_Armoire_x(4,:) = [Armoire_x(10,4) Armoire_x(10,4) Armoire_x(10,4)-0.03 Armoire_x(10,4)-0.03];
Door_Armoire_y(4,:) = Armoire_y(10,:);
Door_Armoire_z(4,:) = Armoire_z(10,:);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Armoire_Metal_x(1,:) = Armoire_x(10,:);
Armoire_Metal_y(1,:) = Armoire_y(10,:);
Armoire_Metal_z(1,:) = [1.2 2.6];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Table_Metal_x(1,:) = [Wall_in_x(11,1)*coef_scale+0.025+0.95 Wall_in_x(11,1)*coef_scale+0.025+0.95 Wall_in_x(11,1)*coef_scale+0.025 Wall_in_x(11,1)*coef_scale+0.025];
Table_Metal_y(1,:) = [min(Pillar_y(1,:)) Wall_in_y(10,1)*coef_scale-0.025 Wall_in_y(10,1)*coef_scale-0.025 min(Pillar_y(1,:))];
Table_Metal_z(1,:) = [0.90 0.925];

Armoire_Metal_x(2,:) = Table_Metal_x(1,:);
Armoire_Metal_y(2,:) = Table_Metal_y(1,:);
Armoire_Metal_z(2,:) = [0.0 0.85];

Armoire_x(11,:) = Table_Metal_x(1,:);
Armoire_y(11,:) = Table_Metal_y(1,:);
Armoire_z(11,:) = [0.0 0.85];

Armoire_x(12,:) = [Post_out2_x(14,3)*coef_scale+0.025+0.95 Post_out2_x(14,3)*coef_scale+0.025+0.95 Post_out2_x(14,3)*coef_scale+0.025 Post_out2_x(14,3)*coef_scale+0.025];
Armoire_y(12,:) = [Post_out2_y(14,3)*coef_scale+0.05 0.5 0.5 Post_out2_y(14,3)*coef_scale+0.05];
Armoire_z(12,:) = [0.0 1.6];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
po_1 = [Post_out1_x(12,:) ; Post_out1_y(12,:)]*coef_scale;
po_1 = R\(po_1-repmat([8.769 ; 5.595],1,4));

Heater_x(9,:) = [po_1(1,2)-0.3320 po_1(1,2)-0.3320 po_1(1,2)-0.3320-0.9 po_1(1,2)-0.3320-0.9];
Heater_y(9,:) = [po_1(2,2)+0.025 po_1(2,2)+0.025+0.25 po_1(2,2)+0.025+0.25 po_1(2,2)+0.025]; Heater_z(9,:) = [0.00 0.25];

h9 = [Heater_x(9,:) ; Heater_y(9,:)];
h9 = R*h9+repmat([8.769 ; 5.595],1,4);

Heater_x(9,:) = h9(1,:);
Heater_y(9,:) = h9(2,:);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%




%% aggregate similar blocks together
Windows_x = [Window_out1_x ; Window_out2_x ; Window_in_x]*coef_scale;
Windows_y = [Window_out1_y ; Window_out2_y ; Window_in_y]*coef_scale;
Windows_z = [Window_out1_z ; Window_out2_z ; Window_in_z];

Posts_x = [Post_out1_x ; Post_out2_x ; Post_in_x]*coef_scale;
Posts_y = [Post_out1_y ; Post_out2_y ; Post_in_y]*coef_scale;
Posts_z = [Post_out1_z ; Post_out2_z ; Post_in_z];

Walls_x = [Wall_out1_x ; Wall_out2_x ; Wall_in_x]*coef_scale;
Walls_y = [Wall_out1_y ; Wall_out2_y ; Wall_in_y]*coef_scale;
Walls_z = [Wall_out1_z ; Wall_out2_z ; Wall_in_z];

Door_x = Door_x*coef_scale;
Door_y = Door_y*coef_scale;

Elevator_x = Elevator_x*coef_scale;
Elevator_y = Elevator_y*coef_scale;



%% 
Wedges_x = [Walls_x ; Windows_x ; Posts_x ; Door_x ; Elevator_x ; Pillar_x ; Light_x];
Wedges_y = [Walls_y ; Windows_y ; Posts_y ; Door_y ; Elevator_y ; Pillar_y ; Light_y];
Wedges_z = [Walls_z ; Windows_z ; Posts_z ; Door_z ; Elevator_z ; Pillar_z ; Light_z];


%% 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Ceiling_Ext_x(1,:) = [Wall_in_x(32,1)*coef_scale Wall_in_x(32,1)*coef_scale Door_x(6,1)+0.5 Door_x(6,1)+0.5];
Ceiling_Ext_y(1,:) = Door_y(6,:);
Ceiling_Ext_z(1,:) = [2.50 3.0];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Floor_x = [];
Floor_y = [];

for i = [2:2:14 141:2:151]
    Floor_x = cat(1,Floor_x,[Wedges_x(i,1) Wedges_x(75,1) Wedges_x(75,1) Wedges_x(i,2)]);
    Floor_y = cat(1,Floor_y,[Wedges_y(i,1) Wedges_y(i,1) Wedges_y(i,2) Wedges_y(i,2)]);
end
for i = 16:2:40
    Floor_x = cat(1,Floor_x,[Wedges_x(i,2) Wedges_x(75,1) Wedges_x(75,1) Wedges_x(i,3)]);
    Floor_y = cat(1,Floor_y,[Wedges_y(i,2) Wedges_y(i,2) Wedges_y(i,3) Wedges_y(i,3)]);
end
Floor_z = repmat([-0.0725 0],size(Floor_x,1),1);

Ceiling_x = Floor_x;
Ceiling_y = Floor_y;
Ceiling_z = repmat([3 3.0725],size(Ceiling_x,1),1);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


if ~(noFurniture)
    Furniture_x = [Desk_x ; Heater_x ; Armoire_x ; Door_Armoire_x ; Etageres_x ; Armoire_Metal_x ; Table_Metal_x ; Ceiling_Ext_x];
    Furniture_y = [Desk_y ; Heater_y ; Armoire_y ; Door_Armoire_y ; Etageres_y ; Armoire_Metal_y ; Table_Metal_y ; Ceiling_Ext_y];
    Furniture_z = [Desk_z ; Heater_z ; Armoire_z ; Door_Armoire_z ; Etageres_z ; Armoire_Metal_z ; Table_Metal_z ; Ceiling_Ext_z];
else
    Furniture_x = [];
    Furniture_y = [];
    Furniture_z = [];
end

%%% 
ind_FC = size(Wedges_x,1)+(1:(size(Floor_x,1)+size(Ceiling_x,1)));
%%%

Wedges_x = [Wedges_x ; Floor_x ; Ceiling_x ; Furniture_x].';
Wedges_y = [Wedges_y ; Floor_y ; Ceiling_y ; Furniture_y].';
Wedges_z = [Wedges_z ; Floor_z ; Ceiling_z ; Furniture_z].';



% nbGTessel     = size(Floor_x,1);
% nbCTessel     = size(Ceiling_x,1);
% 
% nbFurniture   = size(Furniture_x,1);
% 
% nbExtraBlocks = (nbGTessel)+(nbCTessel)+(nbFurniture);
% nbBlocks      = size(Wedges_x,2)-nbExtraBlocks;


%% positions of the Bluetooth Low Energy (BLE) beacons (Tx)
Tx_x = nan;
Tx_y = nan;
Tx_z = nan;


%% position of the mobile phone (Rx)
Rx_x = nan;
Rx_y = nan;
Rx_z = nan;


%% materials
Materials = [5*ones(1,size(Walls_x,1)) 2*ones(1,size(Windows_x,1)) 3*ones(1,size(Posts_x,1)) ...
             4*ones(1,size(Door_x,1)) 3*ones(1,size(Elevator_x,1)) 1*ones(1,size(Pillar_x,1)) ...
             3*ones(1,size(Light_x,1)) 5*ones(1,size(Floor_x,1)) 5*ones(1,size(Ceiling_x,1)) ...
             4*ones(1,size(Desk_x,1)) 3*ones(1,size(Heater_x,1)) 4*ones(1,size(Armoire_x,1)) ...
             3*ones(1,size(Door_Armoire_x,1)) 3*ones(1,size(Etageres_x,1)) 3*ones(1,size(Armoire_Metal_x,1)) ...
             3*ones(1,size(Table_Metal_x,1)) 5*ones(1,size(Ceiling_Ext_x,1))]; % Material type: 1 -> concrete
                                               %                2 -> glass
                                               %                3 -> metal
                                               %                4 -> wood
                                               %                5 -> plaster
                                               %                6 -> carpet