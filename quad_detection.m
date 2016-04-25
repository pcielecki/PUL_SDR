N = 1000;

n = 0 : N-1;

msg = sin(2*pi*n/N) * 2**16;

nosna = sin(2*100*pi*n/N) * 2**16;

fala = msg .* nosna / (2**16);

Iloc = sin(2*100*pi*n/N) * 2**16;
Qloc = cos(2*100*pi*n/N) * 2**16;

I = Iloc .* fala * 2**-16;
Q = Qloc .* fala * 2**-16;

R = sqrt(I.**2 + Q.**2);

subplot(5,1,1);
plot(fala);
subplot(5,1,2);
plot(I);
subplot(5,1,3);
plot(Q);
subplot(5,1,4);
plot(R);
subplot(5,1,5);
stem(abs(fft(R)));
pause();

pkg load signal;

[b,a] = butter(4, 0.2);
plot(abs(fft(filter(b,a,[1, zeros(1,100)]))));

audio = filter(b,a, R);
pause;
close;
subplot(2,1,1);
plot(audio);
subplot(2,1,2);
plot(abs(fft(audio)));
