function [mmask,m] = Masking(P1_re,P2_re) %#codegen
% Checks if it is blocked between P1 and P2

% Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at>
% History:  2011.9.28

% Updated by: Xuhong Li <xuhong@ftw.at>
% History: 2013.08.01
% Unify the output size of 'm', adding 'mmask' as the second output

coder.extrinsic('exit') % for code conversion
coder.extrinsic('disp')

global Nblock eta vnfaces K wedges;

ehi = zeros(3,1);
eti = zeros(3,1);
ett = zeros(3,1);
eht = zeros(3,1);
eho = zeros(3,1);
eto = zeros(3,1);
etr = zeros(3,1);
ehr = zeros(3,1);


%--memory space assigned before being used,important for code conversion--%
ptemp=zeros(2,3);
ftemp=zeros(2,2);
tpp_re=zeros(3,1);
vnfaces_re=zeros(3,1);
tp=zeros(3,1);
mflag=zeros(2,1);
P1=zeros(3,1);
P2=zeros(3,1);

NN = 1e4;
mpflag=zeros(NN,2);
mploss = complex(zeros(NN,1),zeros(NN,1));
mpd = zeros(NN,1);
mepd = zeros(NN,1);
msti = zeros(NN,3);
mstt = zeros(NN,3);
tpp=zeros(1000,2,3);
tff=zeros(1000,2,2);
dist=zeros(1,NN);
si=zeros(3,1);
st=zeros(3,1);
d1=zeros(3,1);
mshi= zeros(NN,3);
msht= zeros(NN,3);
mstr= zeros(NN,3);
msto= zeros(NN,3);
mshr= zeros(NN,3);
msho= zeros(NN,3);
mnbpen=zeros(NN,1);
fe=0;
teps=0;

mTti = complex(zeros(NN,1),zeros(NN,1));
mThi= complex(zeros(NN,1),zeros(NN,1));
mTtt= complex(zeros(NN,1),zeros(NN,1));
mTht= complex(zeros(NN,1),zeros(NN,1));

sti2=0+0i;
cti=0+0i;
str2=0+0i;
ctr=0+0i;
%-------------------------------------------------------------------------%


P1(:,1) = P1_re;
P2(:,1) = P2_re;
ppt = zeros(3,2);
nb = zeros(2,2);
n = zeros(3,1);
face = zeros(2,1);
msk = 0;    % no masking
dP = P2 - P1;
dt = norm(dP);
sdp = 1/dt*dP;
cnt = 0;    % count the number of penertration per path
i = 1;
uno = complex(1,0);

while (i <= Nblock) && (msk ~= 1)   % continue until the end of the blocks or until it is masked
    count = 0;    % count the number of intersection point
    j = 1;
    while (j <= 6) && (msk ~= 1) && (count < 2)    % for each block continue until the end of the faces or until it is masked or both the input and output point are found
        face(1) = i;
        face(2) = j;
        n(:,1) = vnfaces(i,j,:);
        %c = dot(dP,n);
        c = dP'*n;
        if (abs(c) > 1.0e-3)    % if the path is not parallel to the face look for the intersections
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
                if (t > (-1.0e-6)) && (t < (1+(1.0e-6)))    % if t>0 && t<1 intersection point is in between P1 and P2
                    ip = P2 - P1;
                    ip = P1 + t*ip;
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                     af = AppFace(ip,face);
                    af = AppFace2(ip,reshape(wedges(face(1),face(2),:,:),[],3).');
                    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                    if (af == 1)   % intersection point is found
                        count = count+1; 
                        ppt(:,count) = ip;    % coordinates of the intersection point
                        nb(1,count) = i;
                        nb(2,count) = j;
                    end
                end
            end
        end
        if (count == 2) && (msk ~= 1)    % if the two intersection points are found and there is no masking
            d1 = P1-ppt(:,1);
            d2 = P1-ppt(:,2);
            dist(1) = norm(d1);
            dist(2) = norm(d2);
            if (abs(dist(1)-dist(2))>1.0e-8)
                cnt = cnt+1;
                if (dist(2)<dist(1))    % order the intersection points from the closer to the virtual transmitter
                    tpp(cnt,1,:) = ppt(:,2);
                    tpp(cnt,2,:) = ppt(:,1);
                    tff(cnt,1,:) = nb(:,2);
                    tff(cnt,2,:) = nb(:,1);
                else
                    tpp(cnt,1,:) = ppt(:,1);
                    tpp(cnt,2,:) = ppt(:,2);
                    tff(cnt,1,:) = nb(:,1);
                    tff(cnt,2,:) = nb(:,2);
                end 
            end      
        end 
        j = j+1;   
    end
    i = i+1;                     
end

if (msk ~= 1)
    for k = 1:cnt
        tpp_re(:,1) = tpp(k,1,:);
        d1(:,1) = P1-tpp_re;
        dist(k) = norm(d1);
    end
% if more than one penetration is found during the path they are ordered from beginning from the closest to P1 - insertion sort
    if (cnt > 1)
        for a = 2:cnt
            ptemp(1,:) = tpp(a,1,:);
            ptemp(2,:) = tpp(a,2,:);
            ftemp(1,:) = tff(a,1,:);
            ftemp(2,:) = tff(a,2,:);
            index = dist(a);
            b = a;
            while (b > 1) && (dist(b-1)> index)
                tpp(b,1,:) = tpp(b-1,1,:);
                tpp(b,2,:) = tpp(b-1,2,:);
                tff(b,1,:) = tff(b-1,1,:);
                tff(b,2,:) = tff(b-1,2,:);
                dist(b) = dist(b-1);
                b = b-1;
            end 
            tpp(b,1,:) = ptemp(1,:);
            tpp(b,2,:) = ptemp(2,:);
            tff(b,1,:) = ftemp(1,:);
            tff(b,2,:) = ftemp(2,:);
            dist(b) = index;
        end
    end
end 
        
l = 1;
% computing the parameters of penetration
while (l <= cnt) && (msk ~= 1)
    mflag(:,1) = [0;0];    % the value of mflag(1,1) could be 1,2,3; the value of mflag(2,1) could be 4,5,6
    f1 = BlockCheck(tff(l,1,1),tpp(l,1,:));    % it checks if the 1st penetration point belongs to some other block (-1 if not)
    if (l > 1) && (f1 == -1) && (fe == 1)
        disp('Error: No input for previous output!');
        exit; 
    end
    if (l > 1) && (fe == 0) && (f1 ~= -1)
        disp('Error: No previous output for this input!');
        exit; 
    end
    if (f1 ~= -1) && (l == 1) && (dist(l) > 0.005)
        disp('Error: Cannot be 1st penetration!');
        msk = 1;
        break;
    end
    f2 = BlockCheck(tff(l,2,1),tpp(l,2,:));    % it checks if the 2nd penetration point belongs to some other block (-1 if not)
    if (f2 ~= -1) && (l == cnt)
        tpp_re(:,1) = tpp(l,2,:);
        d2 = P2 - tpp_re;
	    dist2 = norm(d2);
        
        if (dist2 > 0.005)
			disp('Error: Cannot be last penetration!');
			msk = 1;
			break;
        end
    end
    if (f2 ~= -1)    % fe==1 means that the output penetration point belongs to another block -> to be used in next loop execution
		fe = 1;
	else
		fe = 0;
    end
    
    tpp_re(:,1) = tpp(l,2,:);
	d2 = P1-tpp_re;
    dist2 = norm(d2);
	dp = abs(dist(l)-dist2);
    
	if (f1~=-1) && (l==1) 
        if ((f1~=0) && ((real(eta(tff(l,1,1)))) == (real(eta(f1))))) %|| ((f1==0) && ((real(eta(tff(l,1,1)))) == (real(Geta)))) 
            msk = 1;
			break;
        else     % mflag(1) to distinguish different possibilities when f1 ~= -1
			mflag(1) = 1;    % 1st penetration point is P1
        end
	end 
    if (f1 ~= -1) && (l > 1) && (fe == 1)
        if ((f1~=0) && ((real(eta(tff(l,1,1)))) == (real(eta(f1))))) %|| ((f1==0) && ((real(eta(tff(l,1,1)))) == (real(Geta)))) % should update here
            mflag(1) = 2;	% input penetration point is an output penetration point of a previous penetration in the same path - same epsilon
		else
			mflag(1) = 3;	% as above but different epsilon
        end
    end
    if (mflag(1) == 0) || (mflag(1) == 3)
        if (mflag(1) == 0)
			si = sdp;
        end 
        vnfaces_re(:,1) = vnfaces(tff(l,1,1),tff(l,1,2),:);
	    et = cross(si,vnfaces_re);
		sti2 = complex(norm(et)^2,0);
        if (mflag(1) == 3)
%             if f1 == 0
%                 teps = sqrt(eta(tff(l,1,1))/Geta);
%             else 
			    teps = sqrt(eta(tff(l,1,1))/eta(f1));
%             end
            
            if (norm(et) > real(teps))    % total internal reflection
                msk = 1;
				break;
            end
        end
        
		cti = complex(sqrt(1-real(sti2)),0);
        
        if (norm(et) <= 1.0e-6)
			eti = [0;0;1];
        else
            eti = 1/norm(et)*et;    % 'eti' is the unitary vector of perpendicular vector (incident field)--- 1st interface
        end 
        
	    ehi = cross(eti,si);    % 'ehi' is the unitary vector of parallel vector (incident field) --- 1st interface
        
        if (mflag(1) == 0)
			eoe = sqrt(1/eta(tff(l,1,1)));
		else
			eoe = teps;
        end 
        
		stt = norm(et)*eoe;
		rstt = real(stt);
        
        if (real(stt) > 1)
            msk = 1;
			break;
        end 
        
		ctt = sqrt(1-rstt^2);
        
        if (norm(et) <= 1.0e-6)
            st = si;
			ett = eti;    % 'ett' is the unitary vector of perpendicular vector (transmission field) --- 1st interface
        else
		    ksi = real(eoe);
		    kn = sqrt(1-((ksi*sqrt(real(sti2)))^2)) + (ksi*real(cti));
            vnfaces_re(:,1) = vnfaces(tff(l,1,1),tff(l,1,2),:);
			st = ksi*si-kn*vnfaces_re;
			ett = eti;
        end
	    st = 1/norm(st)*st;
		eht = cross(ett,st);    % 'eht' is the unitary vector of parallel vector (transmission field) --- 1st interface
    end 
    if (mflag(1) == 2)
        st = si;
    end 
	if (mflag(1) == 1)
		st = sdp;
    end 
	if (f2 ~= -1) && (l == cnt)
		if ((f2~=0) && ((real(eta(tff(l,2,1)))) == (real(eta(f2))))) %|| ((f2==0) && ((real(eta(tff(l,2,1)))) == real(Geta)))
			msk = 1;
			break;
        else    % mflag(2) to distinguish different possibilities when f2 ~= -1
			mflag(2) = 4;    % 2nd penetration point is P2
        end
    end
    if (f2 ~= -1) && (l>1) && (l ~= cnt)
	    if ((f2~=0) && ((real(eta(tff(l,2,1)))) == (real(eta(f2))))) %|| ((f2==0) && ((real(eta(tff(l,2,1)))) == real(Geta)))
			mflag(2) = 5;    % output penetration point is an input penetration point of a following penetration in the same path -  same epsilon
		else
			mflag(2) = 6;    % as above but different epsilon
        end
    end
    if (mflag(2) == 0) || (mflag(2) == 6)
		tp(:,1) = -vnfaces(tff(l,2,1),tff(l,2,2),:);
		et = cross(st,tp);
		str2 = complex(norm(et)^2,0);
		ctr = complex(sqrt(1-real(str2)),0);
		if (mflag(2) == 6)
%             if f2 == 0
%                 eoe = sqrt(Geta/eta(tff(l,2,1)));
%             else
                eoe = sqrt(eta(f2)/eta(tff(l,2,1)));
%             end
		else
			eoe = sqrt(1/eta(tff(l,2,1)));
        end 
		if (norm(et) > real(eoe))    % total internal reflection
			msk = 1;
			break;
        end 
        if (norm(et) <= 1.0e-6)
			etr = [0;0;1];    % 'etr' is the unitary vector of perpendicular vector (incident field) --- 2nd interface
		else
			etr = 1/norm(et)*et;
			ehr = cross(etr,st);    % 'ehr' is the unitary vector of parallel vector (incident field) --- 2nd interface
        end
        if (mflag(2) == 0)
			si = sdp;
            vnfaces_re(:,1) = vnfaces(tff(l,2,1),tff(l,2,2),:);
			et = cross(si,vnfaces_re);
			if (norm(et) <= 1.0e-6)
				eto = [0;0;1];
		    else
				eto = 1/norm(et)*et;    % 'eto' is the unitary vector of perpendicular vector (transmission field) --- 2nd interface
            end 
			eho = cross(eto,si);    % 'eho' is the unitary vector of parallel vector (transmission field) --- 2nd interface
        end 
        if (mflag(2) == 6)
			stt = norm(et)*eoe;
		    rstt = real(stt);
			
            if (real(stt) > 1)
				msk = 1;
				break;
                
            end 
			ctt = sqrt(1-rstt^2);
            if (norm(et) <= 1.0e-6)
				si = st;
			    eto = etr;
            else
                ksi = real(eoe);
				kn = sqrt(1-(ksi*rstt)^2)+(ksi*ctt);
                vnfaces_re(:,1) = vnfaces(tff(l,1,1),tff(l,1,2),:);
				st = (ksi*si)-(kn*vnfaces_re);
				eto = etr;
            end 
            si = 1/norm(si)*si;
            eho = cross(eto,si);
        end 
    else 
        tp(:,1) = -vnfaces(tff(l,2,1),tff(l,2,2),:);
		et = cross(st,tp);
        
		if (norm(et) <= 1.0e-6)
			etr = [0;0;1];
		else
			etr = 1/norm(et)*et;
        end
        
		ehr = cross(etr,si);            
    end
    if (mflag(2) == 5)
	    si = st;
    end 
    if (msk ~= 1)
		sqreta = sqrt(eta(tff(l,1,1)));
		sqrem1 = uno - sqreta;
		kdp = complex(0,K*dp);
        mnbpen(l,:) = tff(l,1,1);    % block number
	    mpflag(l,:) = mflag(1:2);    % vector mflag 
		mploss(l,:) = exp(kdp*sqrem1);    % penetration loss
		mpd(l,:) = dp;    % lenght of the penetration path
        mepd(l,:) = dp*sqrt(real(eta(tff(l,1,1))));	  % effective lenght of the penetration path    
        msti(l,:) = eti;    % perpendicular and parallel polarization vectors at each interface
        mstt(l,:) = ett;
      	mshi(l,:) = ehi;
   		msht(l,:) = eht;
        mstr(l,:) = etr;
        msto(l,:) = eto;
      	mshr(l,:) = ehr;
  		msho(l,:) = eho;
        
        if (mflag(1) == 1)
            mTti(l,:) = 0;
            mThi(l,:) = 0;
        end
        if (mflag(2) == 4)
            mTtt(l,:) = 0;
            mTht(l,:) = 0;
        end        
        if (mflag(1) == 0) || (mflag(1) == 3)
            if (mflag(1) == 0)
                sqes = sqrt(eta(tff(l,1,1))-sti2);
                inveta = 1/eta(tff(l,1,1));
            else
%                 if (f1 == 0)
%                     sqes = sqrt(eta(tff(l,1,1))/Geta-sti2);
%                     inveta = Geta/eta(tff(l,1,1));
%                 else
                    sqes = sqrt(eta(tff(l,1,1))/eta(f1)-sti2);
                    inveta = eta(f1)/eta(tff(l,1,1));
%                 end 
            end
            mTti(l,:) = (2*cti)/(cti+sqes);    % parallel and perpendicular transmission coefficient at 1st interface
            mThi(l,:) = (2*sqrt(inveta)*cti)/(cti+sqrt(inveta)*sqrt(uno-inveta*sti2));
        end 
        if (mflag(2) == 0) || (mflag(2) == 6)
            if (mflag(2) == 0)
                sqes = sqrt(1/eta(tff(l,1,1))-str2);
                inveta = eta(tff(l,1,1));
            else 
                
%                 if (f2 == 0)
%                     sqes = sqrt(Geta/eta(tff(l,2,1))-str2);
%                     inveta = eta(tff(l,2,1))/Geta;
%                 else
                    sqes = sqrt(eta(f2)/eta(tff(l,2,1))-str2);
                    inveta = eta(tff(l,2,1))/eta(f2);
%                 end
            end 
            mTtt(l,:) = (2*ctr)/(ctr+sqes);    % parallel and perpendicular transmission coefficient at 2nd interface
            mTht(l,:) = (2*sqrt(inveta)*ctr)/(ctr+sqrt(inveta)*sqrt(uno-inveta*str2));
        end
        msk = 2;
    end 
    l = l+1;
end 

mmask = msk;    % 1 means masking, 2 means penetration and 0 means nothing
mnpb = cnt;    % number of penetration per path

if (mmask == 2)
   m = struct('shi',mshi, ...
              'sti',msti, ...
              'stt',mstt, ...
              'sht',msht, ...
              'sho',msho, ...
              'sto',msto, ...
              'str',mstr, ...
              'shr',mshr, ...
              'Tti',mTti, ...
              'Thi',mThi, ...
              'Ttt',mTtt, ...
              'Tht',mTht, ...
              'ploss',mploss, ...
              'pd',mpd, ...
              'epd',mepd, ...
              'nbpen',mnbpen, ...
              'pflag',mpflag, ...
              'mask',mmask, ...
              'npb',mnpb);
         
else 
    m = struct('shi',mshi, ...
              'sti',msti, ...
              'stt',mstt, ...
              'sht',msht, ...
              'sho',msho, ...
              'sto',msto, ...
              'str',mstr, ...
              'shr',mshr, ...
              'Tti',mTti, ...
              'Thi',mThi, ...
              'Ttt',mTtt, ...
              'Tht',mTht, ...
              'ploss',mploss, ...
              'pd',mpd, ...
              'epd',mepd, ...
              'nbpen',mnbpen, ...
              'pflag',mpflag, ...
              'mask',mmask, ...
               'npb',mnpb);
          
end 






 







