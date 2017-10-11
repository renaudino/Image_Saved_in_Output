
%% generate the sampling grid ('x', 'y', 'z' coordinates of the Rx)
% starting point of the sampled measurement grid (must be defined outside all blocks) [m]
x0 = 8.7690;
y0 = 5.5950;
z0 = 1.2000;

% resolution of the sampling grid [m]
dx = 0.30; 
dy = 0.30;

% rotation matrix
R  = [cosd(90+theta) sind(90+theta) ; -sind(90+theta) cosd(90+theta)]; 

%% 
switch scenario
    
    case '0' % office scenario
        
        Npoints = {7:13 [7:13 16:17] [7:13 16:17] 6:21 6:22 6:22 5:21 5:21 5:21 [5:13 16:21] 4:8 4:8 3:8 3:8 2:8 1:8 [1:13 16:21] ...
                  [1 4:21] 3:21 5:21 7:21 10:21 12:21 [14:15 18:21] 18:21 16:21 16:21 19:21 19:21 22};
        
        sgrid   = cell(1,size(Npoints,2));
        
        for i = 1:size(Npoints,2)
            sgrid{1,i} = max(cell2mat(Npoints))-Npoints{1,i};
        end
        
        s        = [];
        for i = 1:size(sgrid,2)
            s    = cat(2,s,[((i-1)*dx)*ones(1,size(sgrid{1,i},2)) ; (sgrid{1,i}-sgrid{1}(1))*dy ; z0*ones(1,size(sgrid{1,i},2))]);
        end
        s(1:2,:) = R*s(1:2,:)+repmat([x0 ; y0],1,size(s,2));
        
        
    case '1' % floor scenario
        
        %% 
        wedges              = reshape(p0.wedges,[],3).';
        wedges(1:2,:)       = R\(wedges(1:2,:)-repmat([x0 ; y0],1,p0.Nblock*6*4));
        wedges              = reshape(wedges.',[p0.Nblock 6 4 3]);
        
        %%
        Nx = 100;
        Ny = 50;
        
        x  = linspace(-9,10,Nx);
        y  = linspace(-6,14,Ny);
        z  = z0;
        
        [X,Y,Z] = meshgrid(x,y,z);
        
        XYZ    = [X(:) Y(:) Z(:)];
        
        %% 
        for m = 1:p0.Nblock
            in           = inhull(XYZ,reshape(wedges(m,:,:,:),[],3));
            XYZ(in == 1,:) = nan;
        end
        
        %%
        outer_wedges           = find_OuterWedges(wedges);
        
        valid = [];
        for i = 1:Nx*Ny
            [~,ind]  = min(abs(XYZ(i,1)-outer_wedges(:,1)));
            pos1     = find(outer_wedges(:,1) == outer_wedges(ind,1));
            
            [~,ind]  = min(abs(XYZ(i,2)-outer_wedges(:,2)));
            pos2     = find(outer_wedges(:,2) == outer_wedges(ind,2));
            
            if and(and(XYZ(i,2) >= min(outer_wedges(pos1,2)) , XYZ(i,2) <= max(outer_wedges(pos1,2))) , ...
                    and(XYZ(i,1) >= min(outer_wedges(pos2,1)) , XYZ(i,1) <= max(outer_wedges(pos2,1))))
                valid = cat(2,valid,i);
            end
        end
        s = XYZ(valid,:).';
        
        
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        for z = 0.01:0.01:1.20
            xyz              = [s(1:2,:) ; z*ones(1,size(s,2))];
            for m = 1:p0.Nblock
                in           = inhull(xyz.',reshape(wedges(m,:,:,:),[],3));
                s(:,in == 1) = nan;
            end
        end
        s = s(:,~isnan(s(1,:)));
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        
        
        %% 
        s(1:2,:) = R*s(1:2,:);
        s(1,:)   = s(1,:)+x0;
        s(2,:)   = s(2,:)+y0;
        
    case '2' % multi-floor scenario
        
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        %%% To be completed [...] %%%
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        
end


% %% remove sampling points inside blocks
% for n = 1:Nblock
%     if ~isnan(wedges(n,1,1,1))
%         in           = inhull(s.',reshape(wedges(n,:,:,:),[],3));
%         s(:,in == 1) = nan;
%     end
% end
% s = s(:,~all(isnan(s)));




% %% plot the sampling grid of the scenario
% if (verbose)
%     figure; clf; plot3(s(1,:),s(2,:),s(3,:),'b.'); hold on; PlotBlocks(wedges,[],[]); grid on;
%     xlabel('x [m]','FontSize',13); ylabel('y [m]','FontSize',13); zlabel('z [m]','FontSize',13); view(2);
% end