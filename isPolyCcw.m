function [WedgesInput] = isPolyCcw (WedgesInput)

for i = 1:size(WedgesInput,2)
    w_x                      = WedgesInput(1:2:8,i);
    w_y                      = WedgesInput(2:2:8,i);
    
    orient                   = complex(w_x-mean(w_x),w_y-mean(w_y));
    orient                   = angle(orient)*180/pi;
    orient(orient <= 0)      = orient(orient <= 0)+360;
    
    [~,ind]                  = sort(orient);
    ind                      = [ind(4) ; ind(1:3)].';
    
    if ~isequal(ind,1:4)
        WedgesInput(1:2:8,i) = w_x(ind,:);
        WedgesInput(2:2:8,i) = w_y(ind,:);
    end
end