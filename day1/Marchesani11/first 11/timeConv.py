#! /usr/bin/env python3
#lucas marchesani

minutes = int(input('Input the number of minutes you want to convert\n'))

hours = minutes//60
days = hours//24
years = days//365
days = days%365

print(minutes,'minutes is',years,'and',days,'days')
input("")