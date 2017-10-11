function [m] = Masking_Olivier_global (P1_re, P2_re)

%#codegen
% Checks if it is blocked between P1 and P2
% 
% Authors: Francesco Mani <francesco.mani@uclouvain.be>
%          Mingming Gan   <gan@ftw.at>
% 
% History:  2011.9.28

global eta K Nblock vnfaces wedges;

ehi             = zeros(3,1);
eti             = zeros(3,1); % (OR): parallel & perpendicular incident vectors (1st interface)
ett             = zeros(3,1);
eht             = zeros(3,1); % (OR): parallel & perpendicular transmitted vectors (1st interface)
eho             = zeros(3,1);
eto             = zeros(3,1); % (OR): parallel & perpendicular incident vectors (2nd interface)
etr             = zeros(3,1);
ehr             = zeros(3,1); % (OR): parallel & perpendicular transmitted vectors (2nd interface)

P1              = zeros(3,1);
P2              = zeros(3,1);

P1(:,1)         = P1_re;
P2(:,1)         = P2_re;

ppt             = zeros(3,2);
nb              = zeros(2,2);
n               = zeros(3,1);
face            = zeros(2,1);

msk             = 0; % no masking

dP              = P2-P1;
dt              = norm(dP);
sdp             = dP/dt;

cnt             = 0; % count the number of penetration per path
i               = 1;
uno             = complex(1,0);

tpp             = zeros(1e3,2,3); % (OR): (nb_penetrations_per_path x [P1 P2] x 3D_coordinates)
tff             = zeros(1e3,2,2); % (OR): (nb_penetrations_per_path x [P1 P2] x [nb_block nb_face])

dist            = zeros(2,1);

while (i <= Nblock) && (msk ~= 1) % continue until the end of the blocks or until it is masked
    count       = 0; % count the number of intersection point
    j           = 1;
    
    while (j <= 6) && (msk ~= 1) && (count < 2) % for each block, continue (i): until the end of the faces, 
        face(1) = i;                            % (ii): until it is masked, or (iii): both the input and output points are found
        face(2) = j;
        
        n(:,1)  = vnfaces(i,j,:);
        c       = dP'*n;
        
        if (abs(c) > 1.0e-3) % if the path is not parallel to the face, then look for the intersections
            x1  = wedges(i,j,1,1);
            y1  = wedges(i,j,1,2);
            z1  = wedges(i,j,1,3);
            x2  = wedges(i,j,2,1);
            y2  = wedges(i,j,2,2);
            z2  = wedges(i,j,2,3);
            x0  = wedges(i,j,3,1);
            y0  = wedges(i,j,3,2);
            z0  = wedges(i,j,3,3);
            
            dtr = (P1(1)-P2(1))*((y1-y0)*(z2-z0)-(y2-y0)*(z1-z0))- ...
                  (P1(2)-P2(2))*((x1-x0)*(z2-z0)-(x2-x0)*(z1-z0))+ ...
                  (P1(3)-P2(3))*((x1-x0)*(y2-y0)-(x2-x0)*(y1-y0));
            
            if (dtr == 0)
                error('   Error: the determinant is equal to zero in blocking function!');
            else
                t = ((P1(1)-x0)*((y1-y0)*(z2-z0)-(y2-y0)*(z1-z0))+ ...
                    (P1(2)-y0)*((x2-x0)*(z1-z0)-(x1-x0)*(z2-z0))+ ...
                    (P1(3)-z0)*((x1-x0)*(y2-y0)-(x2-x0)*(y1-y0)))/dtr;
                
                if (t > -1.0e-6) && (t < (1+1.0e-6)) % if t>0 && t<1, intersection point is in-between P1 and P2
                    ip               = P2-P1;
                    ip               = P1+t*ip;
                    
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     af = AppFace(ip,face);
%                     Atemp(:) = wedges(face(1),face(2),[1 2 4],:);
%                     af = AppFace(ip,Atemp);%Loe_20161013, af = AppFace(ip,face);
                    af               = AppFace2(ip,reshape(wedges(face(1),face(2),:,:),[],3).');
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    
                    if (af == 1) % intersection point is found
                        count        = count+1; 
                        ppt(:,count) = ip; % coordinates of the intersection point
                        nb(1,count)  = i;
                        nb(2,count)  = j;
                    end
                end
            end
        end
        
        if (count == 2) && (msk ~= 1) % if the two intersection points are found and there is no masking
            d1                   = P1-ppt(:,1);
            d2                   = P1-ppt(:,2);
            
            dist(1)              = norm(d1);
            dist(2)              = norm(d2);
            
            if (abs(dist(1)-dist(2)) > 1.0e-8)
                cnt              = cnt+1;
                
                [~,ord]          = sort(dist,'ascend'); % order the intersection points starting from the closer 
                                                        % to the virtual transmitter
                tpp(cnt,1:2,:)   = ppt(:,ord).';
                tff(cnt,1:2,:)   = nb(:,ord).';
            end
        end
        j                        = j+1;
    end
    i                            = i+1;
end

dist                             = [dist ; zeros(max([0 cnt-2]),1)];
d1                               = zeros(3,1);

if (msk ~= 1)
    tpp_re             = zeros(3,1);
    
    for k = 1:cnt
        tpp_re(:,1)    = tpp(k,1,:);
        d1(:,1)        = P1-tpp_re;
        dist(k)        = norm(d1);
    end
    
    if (cnt > 1) % if more than one penetration is found during the path, they are ordered from 
                 % beginning from the closest to P1 - insertion sort
        [~,ord]        = sort(dist,'ascend'); % order the penetrations starting from the closer 
                                              % to the virtual transmitter
        dist(:)        = dist(ord);
        tpp(1:length(ord),:,:) = tpp(ord,:,:);
        tff(1:length(ord),:,:) = tff(ord,:,:);
    end
end

% computing the parameters of penetration
flag       = zeros(2,1);

vnfaces_re = zeros(3,1);
tp         = zeros(3,1);

mnbpen     = zeros(cnt,1);
mpflag     = zeros(cnt,2);
mploss     = complex(zeros(cnt,1),zeros(cnt,1));

mpd        = zeros(cnt,1);
mepd       = zeros(cnt,1);

msti       = complex(zeros(cnt,3),zeros(cnt,3));
mstt       = complex(zeros(cnt,3),zeros(cnt,3));
mshi       = complex(zeros(cnt,3),zeros(cnt,3));
msht       = complex(zeros(cnt,3),zeros(cnt,3));
mstr       = complex(zeros(cnt,3),zeros(cnt,3));
msto       = complex(zeros(cnt,3),zeros(cnt,3));
mshr       = complex(zeros(cnt,3),zeros(cnt,3));
msho       = complex(zeros(cnt,3),zeros(cnt,3));
mTti       = complex(zeros(cnt,1),zeros(cnt,1));
mThi       = complex(zeros(cnt,1),zeros(cnt,1));
mTtt       = complex(zeros(cnt,1),zeros(cnt,1));
mTht       = complex(zeros(cnt,1),zeros(cnt,1));

l                   = 1;

while (l <= cnt) && (msk ~= 1)
    
    flag(:,1)       = [0 0].'; % -> flag(1,1) = {0,1,2,3}
                               % -> flag(2,1) = {0,4,5,6}, respectively
    
    f1              = BlockCheck(tff(l,1,1),tpp(l,1,:)); % checks if the input penetration point belongs to some other 
                                                         % block (-1 if not)
    
    if (l == 1) && (f1 ~= -1) && (dist(l) > 0.005)
        fprintf('      Error: Cannot be 1st penetration! \n');
        msk         = 1;
        break;
    end
    
    f2              = BlockCheck(tff(l,2,1),tpp(l,2,:)); % checks if the output penetration point belongs to some other 
                                                         % block (-1 if not)
    
    dist2           = norm(P2-squeeze(tpp(l,2,:)));
    
    if (l == cnt) && (f2 ~= -1) && (dist2 > 0.005)
        fprintf('      Error: Cannot be last penetration! \n');
        msk         = 1;
        break;
    end
    
    if (f2 ~= -1) % output penetration point also belongs to another block
		fe          = 1; % -> to be used in next loop execution
	else
		fe          = 0;
    end
    
    dist2           = norm(P1-squeeze(tpp(l,2,:)));
	dp              = abs(dist(l)-dist2);
    
	if (l == 1) && (f1 ~= -1)
        if (real(eta(tff(l,1,1))) == real(eta(f1))) 
            msk     = 1;
            break;
        else % flag(1) to distinguish different possibilities when f1 ~= -1
			flag(1) = 1; % -> 1st penetration point is P1
        end
	end 
    if (l > 1) && (f1 ~= -1) && (fe == 1)
        if (real(eta(tff(l,1,1))) == real(eta(f1)))
            flag(1) = 2; % input penetration point is an output penetration point of a previous penetration in the same path - same epsilon
		else
			flag(1) = 3; % as above but different epsilon
        end
    end
    
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    si              = sdp;
    
    vnfaces_re(:,1) = vnfaces(tff(l,1,1),tff(l,1,2),:); % (OR): vector normal to 1st face of block
    et              = cross(si,vnfaces_re);             % (OR): perpendicular vector of the incident wave
    sti2            = complex(norm(et)^2,0);            % (OR): sine square of the incident angle
    cti             = complex(sqrt(1-real(sti2)),0);    % (OR): cosine of the incident angle
    
    if (flag(1) == 0) || (flag(1) == 1)
        teps        = eta(tff(l,1,1));
    else
        teps        = eta(tff(l,1,1))/eta(f1); % (OR): no square root (-> modified on 19.02.2017)
    end
    
    if (norm(et) > real(teps)) % total internal reflection
        msk         = 1;
        break;
    end
    
    [eti,ehi]       = cart2rayfixed(si); % (OR): eti -> unitary parallel vector (incident field) --- 1st interface
                                         %       ehi -> unitary perpendicular vector (incident field) --- 1st interface
    
    eoe             = 1/teps; % (OR): no square root (-> modified on 19.02.2017)
    
    ksi             = real(eoe);
    kn              = (ksi*real(cti))-sqrt(1-ksi^2*(1-real(cti)^2));
    
    st              = (ksi*si)+(kn*vnfaces_re);
    st              = st/norm(st);
    
    [ett,eht]       = cart2rayfixed(st); % (OR): ett -> unitary parallel vector (transmission field) --- 1st interface
                                         %       eht -> unitary perpendicular vector (transmission field) --- 1st interface
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    
    if (f2 ~= -1) && (l == cnt)
        if (real(eta(tff(l,2,1))) == real(eta(f2)))
            msk     = 1;
            break;
        else % flag(2) to distinguish different possibilities when f2 ~= -1
            flag(2) = 4; % -> 2nd penetration point is P2
        end
    end
    if (f2 ~= -1) && (l > 1) && (l ~= cnt)
        if (real(eta(tff(l,2,1))) == real(eta(f2)))
            flag(2) = 5; % output penetration point is an input penetration point of a following penetration in the same path - same epsilon
        else
            flag(2) = 6; % as above but different epsilon
        end
    end
    
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    tp(:,1)         = -vnfaces(tff(l,2,1),tff(l,2,2),:); % (OR): vector normal to 2nd face of block
	et              = cross(st,tp);                      % (OR): perpendicular vector of the penetrated wave
	str2            = complex(norm(et)^2,0);             % (OR): sine square of the penetrated angle
	ctr             = sqrt(complex(1-real(str2)));       % (OR): cosine of the penetrated angle
    
    if (flag(2) == 0) || (flag(2) == 4)
        teps        = 1/eta(tff(l,2,1));
    else
        teps        = eta(f2)/eta(tff(l,2,1)); % (OR): no square root (-> modified on 19.02.2017)
    end
    
    if (norm(et) > real(teps)) % total internal reflection
        msk = 1;
        break;
    end
    
    sr              = st;
    [etr,ehr]       = cart2rayfixed(sr); % (OR): etr -> unitary parallel vector (incident field) --- 2nd interface
                                         %       ehr -> unitary perpendicular vector (incident field) --- 2nd interface
    
    eoe             = 1/teps; % (OR): no square root (-> modified on 19.02.2017)
    
    ksi             = real(eoe);
    kn              = (ksi*real(ctr))-sqrt(1-ksi^2*(1-real(ctr)^2));
    
    so              = (ksi*sr)+(kn*vnfaces_re);
    so              = so/norm(so);
    
    [eto,eho]       = cart2rayfixed(so); % (OR): ett -> unitary parallel vector (transmission field) --- 2nd interface
                                         %       eht -> unitary perpendicular vector (transmission field) --- 2nd interface
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    
    if (msk ~= 1)
		sqreta         = sqrt(eta(tff(l,1,1)));
% 		sqrem1         = uno-sqreta; % (OR): no "1-[...]" (-> modified on 28.09.2017)
		sqrem1         = -sqreta;
		kdp            = complex(0,K*dp);
        
        mnbpen(l,:)    = tff(l,1,1); % block number
        
        mpflag(l,:)    = flag(1:2); % vector flag
        mploss(l,:)    = exp(kdp*sqrem1); % penetration loss
        
        mpd(l,:)       = dp; % length of the penetration path
        mepd(l,:)      = dp*sqrt(real(eta(tff(l,1,1)))); % effective length of the penetration path
        
        msti(l,:)      = eti; % perpendicular and parallel polarization vectors at each interface
        mstt(l,:)      = ett;
        mshi(l,:)      = ehi;
        msht(l,:)      = eht;
        mstr(l,:)      = etr;
        msto(l,:)      = eto;
        mshr(l,:)      = ehr;
  		msho(l,:)      = eho;
        
        if (flag(1) == 1)
            mTti(l,:)  = 0;
            mThi(l,:)  = 0;
        end
        if (flag(2) == 4)
            mTtt(l,:)  = 0;
            mTht(l,:)  = 0;
        end
        
        if (flag(1) == 0) || (flag(1) == 3)
            if (flag(1) == 0)
                sqes   = sqrt(eta(tff(l,1,1))-sti2);
                inveta = 1/eta(tff(l,1,1));
            else
                sqes   = sqrt(eta(tff(l,1,1))/eta(f1)-sti2);
                inveta = eta(f1)/eta(tff(l,1,1));
            end
            mTti(l,:)  = (2*cti)/(cti+sqes); % parallel and perpendicular transmission coefficients at 1st interface
            mThi(l,:)  = (2*sqrt(inveta)*cti)/(cti+sqrt(inveta)*sqrt(uno-inveta*sti2));
        end
        
        if (flag(2) == 0) || (flag(2) == 6)
            if (flag(2) == 0)
                sqes   = sqrt((1/eta(tff(l,1,1)))-str2);
                inveta = eta(tff(l,1,1));
            else
                sqes   = sqrt((eta(f2)/eta(tff(l,2,1)))-str2);
                inveta = eta(tff(l,2,1))/eta(f2);
            end
            mTtt(l,:)  = (2*ctr)/(ctr+sqes); % parallel and perpendicular transmission coefficients at 2nd interface
            mTht(l,:)  = (2*sqrt(inveta)*ctr)/(ctr+sqrt(inveta)*sqrt(uno-inveta*str2));
        end
        msk            = 2;
    end
    l                  = l+1;
end

mmask                  = msk; % 1 -> masking, 2 -> penetration, and 0 -> nothing
mnpb                   = cnt; % number of penetrations per path

if (mmask == 2)
   m = struct('shi',mshi,'sti',msti,'stt',mstt,'sht',msht,'sho',msho, ...
              'sto',msto,'str',mstr,'shr',mshr,'Tti',mTti,'Thi',mThi,'Ttt',mTtt,'Tht',mTht, ...
              'ploss',mploss,'pd',mpd,'epd',mepd,'nbpen',mnbpen,'pflag',mpflag,'mask',mmask,'npb',mnpb);
else
    m = struct('shi',complex(zeros(1,3),zeros(1,3)),'sti',complex(zeros(1,3),zeros(1,3)),'stt',complex(zeros(1,3),zeros(1,3)),'sht',complex(zeros(1,3),zeros(1,3)), ...
               'sho',complex(zeros(1,3),zeros(1,3)),'sto',complex(zeros(1,3),zeros(1,3)),'str',complex(zeros(1,3),zeros(1,3)),'shr',complex(zeros(1,3),zeros(1,3)), ...
               'Tti',complex(zeros(1,3),zeros(1,3)),'Thi',complex(zeros(1,3),zeros(1,3)),'Ttt',complex(zeros(1,3),zeros(1,3)),'Tht',complex(zeros(1,3),zeros(1,3)), ...
               'ploss',complex(zeros(1,3),zeros(1,3)),'pd',0,'epd',0,'nbpen',0,'pflag',[],'mask',mmask,'npb',mnpb);
end