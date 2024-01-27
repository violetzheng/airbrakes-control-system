clear
clc
close all

current_height = 0;
current_vel = 0;
current_pitch = 0;

sim('ver1_3DOF_draft2.slx');
heightSignal = ans.yout.getElement('height');
velocitySignal = ans.yout.getElement('velocity');
t = heightSignal.Values.Time;
height = heightSignal.Values.Data;
velocity = velocitySignal.Values.Data;

figure
plot(t,height)
plot(t,velocity)

