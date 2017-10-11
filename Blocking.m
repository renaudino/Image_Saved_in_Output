function blk = Blocking(P1_re,P2_re)
% Check if the two points are blocked

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.20

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01

coder.extrinsic('exit')
coder.extrinsic('disp')

global vnfaces Nblock MSKFlag CEP wedges;

n = zeros(3,1);
face = zeros(2,1);

blk = 0;
i = 1;
P1 = reshape(P1_re,3,1);
P2 = reshape(P2_re,3,1);
dp = P2-P1;


while (i <= Nblock) && (blk ~= 1)
    j = 1;
    while (j <= 6) && (blk ~= 1)
        face(1) = i;
        face(2) = j;
        n(:,1) = vnfaces(i,j,:);
        cdpr = dp'*n;
        if (abs(cdpr) > 1.0e-3)
            x1 = wedges(i,j,1,1);
            y1 = wedges(i,j,1,2);
            z1 = wedges(i,j,1,3);
            x2 = wedges(i,j,2,1);
            y2 = wedges(i,j,2,2);
            z2 = wedges(i,j,2,3); 
            x0 = wedges(i,j,3,1);
            y0 = wedges(i,j,3,2);
            z0 = wedges(i,j,3,3);
            dtr = (P1(1)-P2(1))*((y1-y0)*(z2-z0)-(y2-y0)*(z1-z0))-...
                  (P1(2)-P2(2))*((x1-x0)*(z2-z0)-(x2-x0)*(z1-z0))+...
                  (P1(3)-P2(3))*((x1-x0)*(y2-y0)-(x2-x0)*(y1-y0));
            if (dtr == 0)
                disp('Error: the determinant is equal to zero in bloking function!');
                exit; 
            else 
                t = ((P1(1)-x0)*((y1-y0)*(z2-z0)-(y2-y0)*(z1-z0))+...
                    (P1(2)-y0)*((x2-x0)*(z1-z0)-(x1-x0)*(z2-z0))+...
                    (P1(3)-z0)*((x1-x0)*(y2-y0)-(x2-x0)*(y1-y0)))/dtr;
                if (t > (-1.0e-6)) && (t < (1+(1.0e-6)))
                    ip = P2 - P1;
                    ip = P1 + t*ip;
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     af = AppFace(ip,face);
                    af = AppFace2(ip,reshape(wedges(face(1),face(2),:,:),[],3).');
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    if (af == 1)
                        if (MSKFlag(i) == 1) || (CEP(i) == 1)
                            % masking if the block does not allow penetration or if it is a PEC
%                             if (abs(t)>1.0e-6) && (abs(t-1)>1.0e-6)
                                blk = 1;
%                             end
                        end 
                    end
                end 
            end 
        end 
        j = j + 1;
    end 
    i = i + 1;
end 
                        
                    
            
    

