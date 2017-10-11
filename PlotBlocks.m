function [] = PlotBlocks (wedges, emett, recept, varargin)

%% 
verbose = 0;

for i = 1:size(emett,2)
    emett_id(i,1)   = {'TX'};
    recept_id(i,1)  = {'RX'};
end

if (nargin >= 4)
    emett_id  = varargin{1};
    recept_id = {};
elseif (nargin == 5)
    emett_id  = varargin{1};
    recept_id = varargin{2};
end


%% 
Nblock = size(wedges,1);

hold on;

%% plot Rx and Tx
if ~isempty(emett)
    for i = 1:size(emett,2)
        scatter3(emett(1,i),emett(2,i),emett(3,i),36,'MarkerFaceColor',[0 0 0]);
        text(emett(1,i)-1,emett(2,i)+1,emett(3,i),[' ' emett_id(i,:)]);
    end
end
if ~isempty(recept)
    for i = 1:size(recept,2)
        scatter3(recept(1,i),recept(2,i),recept(3,i),36,'MarkerFaceColor',[0 0 0]);
        text(recept(1,i)-1.75,recept(2,i)+0.50,recept(3,i),[' ' recept_id(:,i)]);
    end
end

%% plot the blocks
xtmp = zeros(Nblock*6,4);
ytmp = zeros(Nblock*6,4);
ztmp = zeros(Nblock*6,4);

xtmp(:) = wedges(:,:,:,1);
ytmp(:) = wedges(:,:,:,2);
ztmp(:) = wedges(:,:,:,3);

[~,sortind] = sort(sum(ztmp,2),'ascend');

patch('XData',xtmp(sortind,:).','YData',ytmp(sortind,:).','ZData',ztmp(sortind,:).',...
                                                          'FaceColor',[0.7 0.7 0.7],'FaceAlpha',0.5);

% axis([min(xtmp(:))-0.5 max(xtmp(:))+0.5 min(ytmp(:))-0.5 max(ytmp(:))+0.5 min(ztmp(:))-0.5 max(ztmp(:))+0.5]);

%% 
if (verbose) % (OR): to have the block indices on the map
    for n = 1:Nblock
        an_1 = wedges(n,6,1,1)*wedges(n,6,2,2)-wedges(n,6,2,1)*wedges(n,6,1,2);
        an_2 = wedges(n,6,2,1)*wedges(n,6,3,2)-wedges(n,6,3,1)*wedges(n,6,2,2);
        an_3 = wedges(n,6,3,1)*wedges(n,6,4,2)-wedges(n,6,4,1)*wedges(n,6,3,2);
        an_4 = wedges(n,6,4,1)*wedges(n,6,1,2)-wedges(n,6,1,1)*wedges(n,6,4,2);
        
        An = (an_1+an_2+an_3+an_4)/2;
        
        xn = ((wedges(n,6,1,1)+wedges(n,6,2,1))*an_1+(wedges(n,6,2,1)+wedges(n,6,3,1))*an_2+...
              (wedges(n,6,3,1)+wedges(n,6,4,1))*an_3+(wedges(n,6,4,1)+wedges(n,6,1,1))*an_4)/(6*An);
        yn = ((wedges(n,6,1,2)+wedges(n,6,2,2))*an_1+(wedges(n,6,2,2)+wedges(n,6,3,2))*an_2+...
              (wedges(n,6,3,2)+wedges(n,6,4,2))*an_3+(wedges(n,6,4,2)+wedges(n,6,1,2))*an_4)/(6*An);
        zn = (wedges(n,5,1,3)+wedges(n,6,1,3))/2;
        
        text(xn,yn,zn,sprintf(' %d',n),'linewidth',10);
    end
end