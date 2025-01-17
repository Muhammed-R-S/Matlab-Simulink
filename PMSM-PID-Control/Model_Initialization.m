%% PMSM parameter initialization 
% switching freq, sample time 
Ts = 5e-6;          % Fundamental sample time
Fsw = 5e3;          % Switching frequency (Hz)
Tsw =  1/Fsw ;      %1/Fsw ; Time Switching 
Tsc = 5e-6  ;       %1/fc;  % Control loop sample time
fc = 1/Tsc;         % Control loop frequency (Hz)
% ================================================

% PMSM parameters
Ld = 0.006365;          % Stator inductance
Lq = 0.006365 ; 
Rs = 1.6;               % Stator Resistance
Lambda_m = 0.1852;      % Permanent Flux linkage 
Polepairs = 4; N = 4;   % Number of pole pairs
J = 0.0001854;          % Moment of inertia
B = 5.39e-5;            % Viscous coefficient

Vnorm = 300;            % Vdc voltage (DC-bus)
Vbat = 350 ;           % Battery voltage (supply the inverter)

