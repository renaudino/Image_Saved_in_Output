function [et, eh] = cart2rayfixed (s)

[az,el,~]           = cart2sph(-s(1),-s(2),-s(3));

Raz                 = [cos(pi/2-az) sin(pi/2-az) 0 ; -sin(pi/2-az) cos(pi/2-az) 0 ; 0 0 1];
Rel                 = [1 0 0 ; 0  cos(pi-el) sin(pi-el) ; 0 -sin(pi-el) cos(pi-el)];

e                  = Raz*Rel*eye(3);

et                 = e(:,1); % (OR): unitary parallel vector (transmission field) --- 1st interface
eh                 = e(:,3); % (OR): unitary perpendicular vector (transmission field) --- 1st interface