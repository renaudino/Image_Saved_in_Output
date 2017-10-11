function Construct2 (OrdRef)

% #codegen

global emett Nblock vnfaces wedges trun2;

% switch (OrdRef) % (OR): commented on 07.11.2017
%     case 1
% %         trun2 = zeros(1e3,7);
%         trun2 = zeros(1e8,7);
%     case 2
% %         trun2 = zeros(1e6,7);
%         trun2 = zeros(1e8,7);
%     otherwise
%         trun2 = zeros(1e8,7);
% end
% trun2         = zeros(1e6,7);

% trun2         = zeros(1e6,7);

trun2(1,1)    = 0;      % (OR): index of the predecessor
trun2(1,2:3)  = [-1 0]; % (OR): [block face]
trun2(1,4:6)  = emett;  % (OR): 'x', 'y' and 'z' coordinates of the point
trun2(1,7)    = 0;      % (OR): level

no            = zeros(3,1);
cnt           = zeros(3,1);
p             = zeros(3,1);
wedges_tmp    = zeros(3,4);

cind = 1;
oind = 1;
ii   = trun2(1,7);

while (ii < OrdRef)
    
%     v    = zeros(3,1);
    E    = trun2(oind,4:6).';
    face = trun2(oind,2:3).';

    if (face(1) == -1) % (OR): if 
            cnt(:,1) = E;
    else
%         if (face(1) ~= 0)
            % coordinates of the center point of the surface related to the image
            cnt(:,1) = sum(wedges(face(1),face(2),:,:),3)/4;   
%         end
    end

%     wedges_re = zeros(3,1);
    vnfaces_re = zeros(3,1);
    
    for i = 1:Nblock
        if (i ~= face(1)) % make sure that the next reflection is not in the same surface as the previous one
            for j = 1:6
                wedges_tmp    = wedges_tmp.';
                wedges_tmp(:) = wedges(i,j,:,:);
                wedges_tmp    = wedges_tmp.';
                
%                 if (face(1) == 0) % the previous reflection from ground
%                     v = sum(wedges_tmp-E*ones(1,4),2)/4;
%                 else
                    v = sum(wedges_tmp-cnt*ones(1,4),2)/4;
%                 end
                
%                 if (face(1) == 0) % the previous reflection from ground
%                     resu1 = -1;
%                 else
                    vnfaces_re(:,1) = vnfaces(i,j,:);
                    resu1 = v'*vnfaces_re; %dot(v,vnfaces_re);
%                 end
                
                if (resu1 < 0)
                    cind = cind+1;
                    trun2(cind,2:3) = [i j];
                    
                    no(:,1) = vnfaces(i,j,:);
                    p(:,1)  = wedges(i,j,1,:);
                    
                    pt = p-E;
                    
                    trun2(cind,4:6) = (E+2*(no'*pt).*no).'; % the coordinates of the image point
                    trun2(cind,1)   = oind;
                    trun2(cind,7)   = ii+1;
                end
            end
        end
    end
    
%     no(1) = 0; % ground case
%     no(2) = 0;
%     no(3) = 1;
%     
%     pt = -E;
%     
%     if (face(1) ~= 0) && (cnt(3) > 0)
%         cind            = cind+1;
%         trun2(cind,2:3) = [0 0];
%         trun2(cind,4:6) = (E+2*(no'*pt).*no).';
%         trun2(cind,1)   = oind;
%         trun2(cind,7)   = ii+1;
%     end
    
    oind = oind+1;
    ii = trun2(oind,7);
end