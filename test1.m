
%% Test case: diffraction with non line-of-sight

Blck1_x = [  0  0 -20 -20];
Blck1_y = [-10  0   0 -10];
Blck1_z = [  0 10];

Blck2_x = [10 10  0 0];
Blck2_y = [ 5 25 25 5];
Blck2_z = [ 0 10];

Wedges_x = [Blck1_x ; Blck2_x].';
Wedges_y = [Blck1_y ; Blck2_y].';
Wedges_z = [Blck1_z ; Blck2_z].';


%% positions of the Bluetooth Low Energy (BLE) beacons (Tx)
Tx_x = -10;
Tx_y =  2;
Tx_z =  2;


%% position of the mobile phone (Rx)
Rx_x =  5;
Rx_y = -5;
Rx_z =  2;

%% materials
Materials = 5*ones(1,size(Wedges_x,2)); % '5' -> plaster