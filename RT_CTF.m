% get the channel impulse response of ray tracing

load RT_OUTPUTDATA;

%% channel transfer function for all paths
m = 0;  
dis = Outputdata(:,13);
Eout_orig = complex(Outputdata(:,14),Outputdata(:,15));

[dis_up,ord] = sort(dis);    % order the delay
Eout = Eout_orig(ord);
c = 3e8;
del = dis_up/c;    % order the delay
B = 4800e6;        % Bandwidth
delt_f = 500e3;    % frequency resolution
Nf = ceil(B/delt_f);
for q = (-Nf/2):(Nf/2-1)
    m = m+1;
    Hf_all(m) = sum(Eout.*exp(-1i*2*pi*del*delt_f*q),1);    
end


%% channel transfer function for deterministic paths
m = 0;  
dis = Outputdata_det(:,13);
Eout_orig = complex(Outputdata_det(:,14),Outputdata_det(:,15));

[dis_up,ord] = sort(dis);    % order the delay
Eout = Eout_orig(ord);
c = 3e8;
del = dis_up/c;    % order the delay
B = 4800e6;    % filter Bandwidth
delt_f = 500e3;   % frequency resolution
Nf = ceil(B/delt_f);
for q = (-Nf/2):(Nf/2-1)
    m = m+1;
    Hf_det(m) = sum(Eout.*exp(-1i*2*pi*del*delt_f*q),1);    
end

figure; plot(20*log10(abs(ifft(hann(length(Hf_all)).*Hf_all.'))),'b');
hold on; plot(20*log10(abs(ifft(hann(length(Hf_det)).*Hf_det.'))),'r');
