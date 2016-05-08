1;
subplot(6,2,1);
hfin = load("ISE/PUL_SDR_r/hf_in");
plot(hfin);

subplot(6,2,3)
locI = load("ISE/PUL_SDR_r/local_I");
plot(locI);

subplot(6,2,5)
locQ = load("ISE/PUL_SDR_r/local_Q");
plot(locQ);

subplot(6,2,7)
mixedI= load("ISE/PUL_SDR_r/mixed_I");
plot(mixedI);

subplot(6,2,9)
mixedQ= load("ISE/PUL_SDR_r/mixed_Q");
plot(mixedQ);


subplot(6,2,11)
aud = load("ISE/PUL_SDR_r/audio_out");
plot(aud)


t_mixedI = (hfin .* locI) * 2**-16;
t_mixedQ = hfin .* locQ * 2**-16;

t_aud = abs(t_mixedI) + abs(t_mixedQ);

subplot(6,2,8);
plot(t_mixedI);

subplot(6,2,10);
plot(t_mixedQ);

subplot(6,2,12);
plot(t_aud);
