function [m] = Mat_ElectProperties (mat)

% Material type: 1 -> concrete
%                2 -> glass
%                3 -> metal
%                4 -> wood
%                5 -> plaster
%                6 -> carpet

% m.DSF        : diffuse scattering flag (0 -> no ; 1 -> yes)
% m.PF         : penetration flag (0 -> yes ; 1 -> no)
% m.PEC        : perfect electric conductor (0 -> no ; 1 -> yes)
% 
% m.Permitt    : permittivity of the block
% m.Conduct    : conductivity of the block
% 
% m.DSM        : diffuse scattering model (1 -> Lambertian ; 2 -> directive ; 3 -> backscattering)
% m.SC         : scattering coefficient
% 
% m.RF         : repartition factor in backscattering model
% m.WSL        : width of the scattering lobe
% m.WBSL       : width of the backscattering lobe


if (mat == 1) % -> concrete
    m.DSF = 1;
    m.PF  = 0;
    m.PEC = 0;
    
    m.Permitt = 6.00;
    m.Conduct = 0.01;
    
    m.DSM = 2;
    m.SC  = 0.4;
    
    m.RF  = 0.00;
    m.WSL  = 4.00;
    m.WBSL = 0.00;
    
elseif (mat == 2) % -> glass
    m.DSF = 1;
    m.PF  = 0;
    m.PEC = 0;
    
    m.Permitt = 3.00;
    m.Conduct = 1e-9;
    
    m.DSM = 2;
    m.SC  = 0.4;
    
    m.RF  = 0.0;
    m.WSL  = 4.00;
    m.WBSL = 0.00;
    
elseif (mat == 3) % -> metal
    m.DSF = 1;
    m.PF  = 0;
    m.PEC = 1;
    
    m.Permitt = 1.00;
    m.Conduct = 1e7;
    
    m.DSM = 2;
    m.SC  = 0.4;
    
    m.RF  = 0.0;
    m.WSL  = 4.00;
    m.WBSL = 0.00;
    
elseif (mat == 4) % -> wood
    m.DSF = 1;
    m.PF  = 0;
    m.PEC = 0;
    
    m.Permitt = 2.10;
    m.Conduct = 0.05;
    
    m.DSM = 2;
    m.SC  = 0.4;
    
    m.RF  = 0.0;
    m.WSL  = 4.00;
    m.WBSL = 0.00;
    
elseif (mat == 5) % -> plaster
    m.DSF = 1;
    m.PF  = 0;
    m.PEC = 0;
    
    m.Permitt = 4.00;
    m.Conduct = 0.02;
    
    m.DSM = 2;
    m.SC  = 0.0;
    
    m.RF  = 0.0;
    m.WSL  = 4.00;
    m.WBSL = 0.00;
    
elseif (mat == 6) % -> carpet
    m.DSF = 1;
    m.PF  = 0;
    m.PEC = 0;
    
    m.Permitt = nan;
    m.Conduct = nan;
    
    m.DSM = 2;
    m.SC  = 0.4;
    
    m.RF  = 0.0;
    m.WSL  = 4.00;
    m.WBSL = 0.00;
    
end