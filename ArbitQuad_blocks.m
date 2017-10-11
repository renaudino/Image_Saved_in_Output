
theta = 29.70;

%% 
bl1_x = [1 0 0 1 1 0 0 1];
bl1_y = [1 1 0 0 1 1 0 0];
bl1_z = [0 0 0 0 1 1 1 1];

bl2_x = 5+[1 1 0 0 1 1 0 0];
bl2_y = 5+[0 2 2 0 0 1 1 0];
bl2_z = 5+[0 0 0 0 1 1 1 1];

bl3_x = [1 0 0 1 1 0 0 1];
bl3_y = [5 5 0 0 5 5 0 0];
bl3_z = [0 7 5 7 3 10 8 9];

Wedges_x = [bl1_x ; bl2_x ; bl3_x].';
Wedges_y = [bl1_y ; bl2_y ; bl3_y].';
Wedges_z = [bl1_z ; bl2_z ; bl3_z].';

Materials = 5*ones(size(Wedges_x));