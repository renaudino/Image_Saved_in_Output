function scenario()
% Plot the scenario and paths

% Authors: Mingming Gan <gan@ftw.at>
% History: 2011.10.18
global wedges Nblock emett recept Outputdata_tot OutputDataLos OutputDataRef OutputDataDiff OutputDataLDS OutputDataFDS;
x = linspace(0,15,50);
y = linspace(-5,25,50);
z = linspace(0,5,50);
figure;
handle=plot3(emett(1),emett(2),emett(3),'bo');
set(handle,'LineWidth',2);
hold on;
handle=plot3(recept(1),recept(2),recept(3),'bo');
set(handle,'LineWidth',2);
hold on;
for i = 1:Nblock 
    handle=plot3([wedges(i,1,1,1),wedges(i,1,2,1)],[wedges(i,1,1,2),wedges(i,1,2,2)],[wedges(i,1,1,3),wedges(i,1,2,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,1,2,1),wedges(i,1,3,1)],[wedges(i,1,2,2),wedges(i,1,3,2)],[wedges(i,1,2,3),wedges(i,1,3,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,1,3,1),wedges(i,1,4,1)],[wedges(i,1,3,2),wedges(i,1,4,2)],[wedges(i,1,3,3),wedges(i,1,4,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,1,4,1),wedges(i,1,1,1)],[wedges(i,1,4,2),wedges(i,1,1,2)],[wedges(i,1,4,3),wedges(i,1,1,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,2,1,1),wedges(i,2,2,1)],[wedges(i,2,1,2),wedges(i,2,2,2)],[wedges(i,2,1,3),wedges(i,2,2,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,2,2,1),wedges(i,2,3,1)],[wedges(i,2,2,2),wedges(i,2,3,2)],[wedges(i,2,2,3),wedges(i,2,3,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,2,3,1),wedges(i,2,4,1)],[wedges(i,2,3,2),wedges(i,2,4,2)],[wedges(i,2,3,3),wedges(i,2,4,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,3,1,1),wedges(i,3,2,1)],[wedges(i,3,1,2),wedges(i,3,2,2)],[wedges(i,3,1,3),wedges(i,3,2,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,3,2,1),wedges(i,3,3,1)],[wedges(i,3,2,2),wedges(i,3,3,2)],[wedges(i,3,2,3),wedges(i,3,3,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,3,3,1),wedges(i,3,4,1)],[wedges(i,3,3,2),wedges(i,3,4,2)],[wedges(i,3,3,3),wedges(i,3,4,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,4,1,1),wedges(i,4,2,1)],[wedges(i,4,1,2),wedges(i,4,2,2)],[wedges(i,4,1,3),wedges(i,4,2,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,4,2,1),wedges(i,4,3,1)],[wedges(i,4,2,2),wedges(i,4,3,2)],[wedges(i,4,2,3),wedges(i,4,3,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
    handle=plot3([wedges(i,4,3,1),wedges(i,4,4,1)],[wedges(i,4,3,2),wedges(i,4,4,2)],[wedges(i,4,3,3),wedges(i,4,4,3)],'r'); 
    set(handle,'LineWidth',2);
    hold on;
end 
xlabel('Length');
ylabel('Width');
zlabel('Height');

if (isempty(OutputDataLos) ~= 1) 
    handle=plot3([OutputDataLos(1),OutputDataLos(7)],[OutputDataLos(2),OutputDataLos(8)],[OutputDataLos(3),OutputDataLos(9)],'b');
    set(handle,'LineWidth',2);
end 
hold on;

if (isempty(OutputDataRef) ~= 1)
    %for k = 1:size(OutputDataRef,1)
    for k = 3:5
        if OutputDataRef(k,6) == OutputDataRef(k,9)
            handle=plot3([OutputDataRef(k,4),emett(1)],[OutputDataRef(k,5),emett(2)],[OutputDataRef(k,6),emett(3)],'g');
            set(handle,'LineWidth',2);
            hold on;
            handle=plot3([OutputDataRef(k,4),recept(1)],[OutputDataRef(k,5),recept(2)],[OutputDataRef(k,6),recept(3)],'g');
            set(handle,'LineWidth',2);
            hold on
        else
            handle=plot3([OutputDataRef(k,4),emett(1)],[OutputDataRef(k,5),emett(2)],[OutputDataRef(k,6),emett(3)],'g');
            set(handle,'LineWidth',2);
            hold on;
            handle=plot3([OutputDataRef(k,4),OutputDataRef(k,7)],[OutputDataRef(k,5),OutputDataRef(k,8)],[OutputDataRef(k,6),OutputDataRef(k,9)],'g');
            set(handle,'LineWidth',2);
            hold on;
            handle=plot3([OutputDataRef(k,7),recept(1)],[OutputDataRef(k,8),recept(2)],[OutputDataRef(k,9),recept(3)],'g');
            set(handle,'LineWidth',2);
            hold on
        end
    end
end 

if (isempty(OutputDataDiff) ~= 1)
    %for k = 1:size(OutputDataDiff,1)
    for k = 1:3
        handle=plot3([OutputDataDiff(k,4),emett(1)],[OutputDataDiff(k,5),emett(2)],[OutputDataDiff(k,6),emett(3)],'m');
        set(handle,'LineWidth',2);
        hold on;
        handle=plot3([OutputDataDiff(k,4),recept(1)],[OutputDataDiff(k,5),recept(2)],[OutputDataDiff(k,6),recept(3)],'m');
        set(handle,'LineWidth',2);
        hold on;
    end 
end 

if (isempty(OutputDataLDS) ~= 1)
    for k = 1:10
        handle=plot3([OutputDataLDS(k,4),emett(1)],[OutputDataLDS(k,5),emett(2)],[OutputDataLDS(k,6),emett(3)],'m');
        set(handle,'LineWidth',2);
        hold on;
        handle=plot3([OutputDataLDS(k,4),OutputDataLDS(k,7)],[OutputDataLDS(k,5),OutputDataLDS(k,8)],[OutputDataLDS(k,6),OutputDataLDS(k,9)],'m');
        set(handle,'LineWidth',2);
        hold on;
        handle=plot3([OutputDataLDS(k,7),recept(1)],[OutputDataLDS(k,8),recept(2)],[OutputDataLDS(k,9),recept(3)],'m');
        set(handle,'LineWidth',2);
        hold on
    end
end

if (isempty(Outputdata_tot) ~= 1)
    OutputDataFDS = Outputdata_tot{1,1};
    for k = 1:1
        if OutputDataFDS(k,6) == OutputDataFDS(k,9)
            handle=plot3([OutputDataFDS(k,4),emett(1)],[OutputDataFDS(k,5),emett(2)],[OutputDataFDS(k,6),emett(3)],'k');
            set(handle,'LineWidth',0.5);
            hold on;
            handle=plot3([OutputDataFDS(k,4),recept(1)],[OutputDataFDS(k,5),recept(2)],[OutputDataFDS(k,6),recept(3)],'k');
            set(handle,'LineWidth',0.5);
            hold on
        else
            handle=plot3([OutputDataFDS(k,4),emett(1)],[OutputDataFDS(k,5),emett(2)],[OutputDataFDS(k,6),emett(3)],'k');
            set(handle,'LineWidth',0.5);
            hold on;
            handle=plot3([OutputDataFDS(k,4),OutputDataFDS(k,7)],[OutputDataFDS(k,5),OutputDataFDS(k,8)],[OutputDataFDS(k,6),OutputDataFDS(k,9)],'k');
            set(handle,'LineWidth',0.5);
            hold on;
            handle=plot3([OutputDataFDS(k,7),recept(1)],[OutputDataFDS(k,8),recept(2)],[OutputDataFDS(k,9),recept(3)],'k');
            set(handle,'LineWidth',0.5);
            hold on
        end
    end
end 


%% should be updated
% figure;
% plot3(emett(1),emett(2),emett(3),'bo');
% hold on;
% plot3(recept(1),recept(2),recept(3),'bo');
% hold on;
% for i = 1:Nblock
%     v=[wedges(i,5,1,1) wedges(i,5,1,2) wedges(i,5,1,3); wedges(i,5,2,1) wedges(i,5,2,2) wedges(i,5,2,3);...
%        wedges(i,5,3,1) wedges(i,5,3,2) wedges(i,5,3,3); wedges(i,5,4,1) wedges(i,5,4,2) wedges(i,5,4,3);...
%        wedges(i,6,1,1) wedges(i,6,1,2) wedges(i,6,1,3); wedges(i,6,2,1) wedges(i,6,2,2) wedges(i,6,2,3);...
%        wedges(i,6,3,1) wedges(i,6,3,2) wedges(i,6,3,3); wedges(i,6,4,1) wedges(i,6,4,2) wedges(i,6,4,3)];
%     f= [1 2 3 4;2 3 6 7;4 3 6 5;4 1 8 5;1 2 7 8;5 6 7 8];
%     patch('Faces',f,'Vertices',v,'FaceColor','r');
%     view(30,30)
%     hold on;
% end 
% if isempty(OutputDataLos) ~= 1
%     plot3([OutputDataLos(3),OutputDataLos(6)],[OutputDataLos(4),OutputDataLos(7)],[OutputDataLos(5),OutputDataLos(8)],'b');
% end 
% hold on;
% 
% if (isempty(OutputDataRef) ~= 1)
%     for k = 1:size(OutputDataRef,1)
%         if OutputDataRef(k,3) == OutputDataRef(k,6)
%             plot3([OutputDataRef(k,3),emett(1)],[OutputDataRef(k,4),emett(2)],[OutputDataRef(k,5),emett(3)],'g');
%             hold on;
%             plot3([OutputDataRef(k,3),recept(1)],[OutputDataRef(k,4),recept(2)],[OutputDataRef(k,5),recept(3)],'g');
%             hold on
%         else
%             plot3([OutputDataRef(k,3),emett(1)],[OutputDataRef(k,4),emett(2)],[OutputDataRef(k,5),emett(3)],'g');
%             hold on;
%             plot3([OutputDataRef(k,3),OutputDataRef(k,6)],[OutputDataRef(k,4),OutputDataRef(k,7)],[OutputDataRef(k,5),OutputDataRef(k,8)],'g');
%             hold on;
%             plot3([OutputDataRef(k,6),recept(1)],[OutputDataRef(k,7),recept(2)],[OutputDataRef(k,8),recept(3)],'g');
%             hold on
%         end
%     end
% end 
% 
% if (isempty(OutputDataDiff) ~= 1)
%     for k = 1:size(OutputDataDiff,1)
%         plot3([OutputDataDiff(k,3),emett(1)],[OutputDataDiff(k,4),emett(2)],[OutputDataDiff(k,5),emett(3)],'c');
%         hold on;
%         plot3([OutputDataDiff(k,3),recept(1)],[OutputDataDiff(k,4),recept(2)],[OutputDataDiff(k,5),recept(3)],'c');
%         hold on
%     end 
% end 
% 
% if (isempty(OutputDataLDS) ~= 1)
%     for k = 1:20
%         plot3([OutputDataLDS(k,3),emett(1)],[OutputDataLDS(k,4),emett(2)],[OutputDataLDS(k,5),emett(3)],'m');
%         hold on;
%         plot3([OutputDataLDS(k,3),OutputDataLDS(k,6)],[OutputDataLDS(k,4),OutputDataLDS(k,7)],[OutputDataLDS(k,5),OutputDataLDS(k,8)],'m');
%         hold on;
%         plot3([OutputDataLDS(k,6),recept(1)],[OutputDataLDS(k,7),recept(2)],[OutputDataLDS(k,8),recept(3)],'m');
%         hold on
%     end
% end
% 
% if (isempty(OutputDataFDS) ~= 1)
%     for k = 1:20
%         if OutputDataFDS(k,3) == OutputDataFDS(k,6)
%             plot3([OutputDataFDS(k,3),emett(1)],[OutputDataFDS(k,4),emett(2)],[OutputDataFDS(k,5),emett(3)],'k');
%             hold on;
%             plot3([OutputDataFDS(k,3),recept(1)],[OutputDataFDS(k,4),recept(2)],[OutputDataFDS(k,5),recept(3)],'k');
%             hold on
%         else
%             plot3([OutputDataFDS(k,3),emett(1)],[OutputDataFDS(k,4),emett(2)],[OutputDataFDS(k,5),emett(3)],'k');
%             hold on;
%             plot3([OutputDataFDS(k,3),OutputDataFDS(k,6)],[OutputDataFDS(k,4),OutputDataFDS(k,7)],[OutputDataFDS(k,5),OutputDataFDS(k,8)],'k');
%             hold on;
%             plot3([OutputDataFDS(k,6),recept(1)],[OutputDataFDS(k,7),recept(2)],[OutputDataFDS(k,8),recept(3)],'k');
%             hold on
%         end
%     end
% end 
% 
% 
