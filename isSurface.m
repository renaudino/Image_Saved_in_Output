function [flag] = isSurface (wedges)

flag = 1;

v = [];
for i = 1:4
    for j = i+1:4
        x = squeeze(wedges(1,1,i,:));
        y = squeeze(wedges(1,1,j,:));
        v = cat(2,v,x-y);
    end
end

w = [];
for i = 1:size(v,2)
    for j = i+1:size(v,2)
        wtmp = cross(v(:,i),v(:,j));
        w = cat(2,w,wtmp/norm(wtmp));
    end
end

d = [];
for i = 1:size(w,2)
    for j = i+1:size(w,2)
        d = cat(2,d,dot(w(:,i),w(:,j)));
    end
end

if any(abs(d-1) >= 1e-6)
    flag = 0;
end