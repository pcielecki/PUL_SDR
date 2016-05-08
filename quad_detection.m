N = 1000;

n = 0 : N-1;

msg = (1+sin(2*pi*n/N)) * 2**15;

nosna =(1+sin(2*100*pi*n/N)) * 2**15;

fala = msg .* nosna / (2**16);

Iloc = (sin(2*100*pi*n/N)) * 2**15;
Qloc = (cos(2*100*pi*n/N)) * 2**15;

I = Iloc .* fala * 2**-16;
Q = Qloc .* fala * 2**-16;

%R = sqrt(I.**2 + Q.**2);
R = abs(I) + abs(Q);
figure(2);
subplot(6,1,1);
plot(fala);
subplot(6,1,2);
plot(Iloc);
subplot(6,1,3);
plot(Qloc);
subplot(6,1,4)
plot(I);
subplot(6,1,5)
plot(Q);
subplot(6,1,6);
plot(R);
pause
subplot(5,1,5);
stem(abs(fft(R)));
pause();

pkg load signal;

[b,a] = butter(4, 0.05);
plot(abs(fft(filter(b,a,[1, zeros(1,100)]))));

audio = filter(b,a, R);
pause;
close;
subplot(2,1,1);
plot(audio);
subplot(2,1,2);
plot(abs(fft(audio)));
