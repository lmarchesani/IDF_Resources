#! /usr/bin/env python3
#Lucas Marchesani

v0 = float(input('Input your v0\n'))
v1 = float(input('Input your v1\n'))
time = float(input('Input your time\n'))

accel = (v1-v0)/time

print('Your acceleration is',accel,'m/s')
input("")