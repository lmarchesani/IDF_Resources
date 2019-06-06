#! /usr/bin/env python3
#Lucas Marchesani

def main():
    speed = int(input('input your speed\n'))
    time = int(input('Input your hours traveled\n'))

    i=1
    print('Hour         Distance Traveled')
    print('______________________________')
    while (i<=time):
        distance = speed*i
        print(i,'               ',distance)
        i+=1
main()

    