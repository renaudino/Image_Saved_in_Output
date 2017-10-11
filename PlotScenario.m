function PlotScenario (Outputdata, wedges, emett, recept)

%% 
hold on;

OutputDataLos  = Outputdata(Outputdata(:,10) == 0,:);
OutputDataRef  = Outputdata(Outputdata(:,10) == 1,:);
OutputDataDiff = Outputdata(Outputdata(:,10) == 2,:);
OutputDataLDS  = Outputdata(Outputdata(:,10) == 3,:);
OutputDataFDS  = Outputdata(Outputdata(:,10) == 4,:);


%% plot the blocks
Nblock = size(wedges,1);

xtmp = zeros(Nblock*6,4);
ytmp = zeros(Nblock*6,4);
ztmp = zeros(Nblock*6,4);

xtmp(:) = wedges(:,:,:,1);
ytmp(:) = wedges(:,:,:,2);
ztmp(:) = wedges(:,:,:,3);

[~,sortind] = sort(sum(ztmp,2),'ascend');

cutind = 0;
patch('XData',xtmp(sortind(1:end-cutind),:).', ...
      'YData',ytmp(sortind(1:end-cutind),:).', ...
      'ZData',ztmp(sortind(1:end-cutind),:).','FaceColor',[0.7 0.7 0.7],'FaceAlpha',.5)


%% plot Tx and Rx
scatter3([emett(1) ; recept(1)], ...
         [emett(2) ; recept(2)], ...
         [emett(3) ; recept(3)],36,'MarkerFaceColor',[0 0 0]);

text(emett(1),emett(2),emett(3),' Tx'); text(recept(1),recept(2),recept(3),' Rx');


%% plot line-of-sight
if ~isempty(OutputDataLos)
    h = plot3(OutputDataLos([1 4]).',OutputDataLos([2 5]).',OutputDataLos([3 6]).','r-','linewidth',3);
    for ii = 1:length(h)
        h(ii).Color = [h(ii).Color 0.5];
    end
end

%% plot reflections
if ~isempty(OutputDataRef)
    for n = 1:5%p.Nreflx
        refind      = (OutputDataRef(:,11) == n);
        ind         = 12+(0:n-1)*3;
        
        h               = plot3(OutputDataRef(refind,[1 ind 4]).', ...
                                OutputDataRef(refind,[2 ind+1 5]).',OutputDataRef(refind,[3 ind+2 6]).','b-','linewidth',3);
        for ii = 1:length(h)
            h(ii).Color = [h(ii).Color 1/n];
        end
    end
end

%% plot diffraction
if ~isempty(OutputDataDiff)
    scatter3(OutputDataDiff(:,12),OutputDataDiff(:,13),OutputDataDiff(:,14),'y*','linewidth',5);
end

%% plot last diffuse scatterer
if ~isempty(OutputDataLDS)
    scatter3(OutputDataLDS(:,12),OutputDataLDS(:,13),OutputDataLDS(:,14),5,[0 1 0],'s','linewidth',13);
    scatter3(OutputDataLDS(:,15),OutputDataLDS(:,16),OutputDataLDS(:,17),5,[0 1 1],'d','linewidth',13);
end

%% plot first diffuse scatterer
if ~isempty(OutputDataFDS)
    scatter3(OutputDataFDS(:,12),OutputDataFDS(:,13),OutputDataFDS(:,14),5,[1 0 0],'d','linewidth',13);
%     scatter3(OutputDataFDS(:,15),OutputDataFDS(:,16),OutputDataFDS(:,17),5,[1 1 0],'d','linewidth',13);
end