function [WedgesInput] = isPolyCcw_ArbitQuad (WedgesInput)

for i = 1:size(WedgesInput,2)
    w_x                      = WedgesInput(1:3:10,i);
    w_y                      = WedgesInput(2:3:11,i);
    w_z                      = WedgesInput(3:3:12,i);
    
    orient                   = complex(w_x-mean(w_x),w_y-mean(w_y));
    orient                   = angle(orient)*180/pi;
    orient(orient <= 0)      = orient(orient <= 0)+360;
    
    [~,ind]                  = sort(orient);
    ind                      = [ind(4) ; ind(1:3)].';
    
    if ~isequal(ind,1:4)
        WedgesInput(1:3:10,i) = w_x(ind,:);
        WedgesInput(2:3:11,i) = w_y(ind,:);
        WedgesInput(3:3:12,i) = w_z(ind,:);
    end
end


for i = 1:size(WedgesInput,2)
    w_x                      = WedgesInput(13:3:22,i);
    w_y                      = WedgesInput(14:3:23,i);
    w_z                      = WedgesInput(15:3:24,i);
    
    orient                   = complex(w_x-mean(w_x),w_y-mean(w_y));
    orient                   = angle(orient)*180/pi;
    orient(orient <= 0)      = orient(orient <= 0)+360;
    
    [~,ind]                  = sort(orient);
    ind                      = [ind(4) ; ind(1:3)].';
    
    if ~isequal(ind,1:4)
        WedgesInput(13:3:22,i) = w_x(ind,:);
        WedgesInput(14:3:23,i) = w_y(ind,:);
        WedgesInput(15:3:24,i) = w_z(ind,:);
    end
end