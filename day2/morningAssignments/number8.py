#! /usr/bin/env python3
#Lucas Marchesani

def main():
    cal_per_min = 3.9
    for i in range (1,31):
        calories = i*cal_per_min
        if (i==10):
            print('You have burnt',calories,'calories at',i,'minutes')
        elif (i==15):
            print('You have burnt',calories,'calories at',i,'minutes')
        elif (i==20):
            print('You have burnt',calories,'calories at',i,'minutes')
        elif (i==25):
            print('You have burnt',calories,'calories at',i,'minutes')
        elif (i==30):
            print('You have burnt',calories,'calories at',i,'minutes')
main()