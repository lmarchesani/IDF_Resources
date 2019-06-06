#! /usr/bin/env python3
#Lucas Marchesani

def lotteryNo():
    import random
    integer = []
    for i in range(0 , 7):
        integer.append(random.randint(0, 9))
        i+=1
    return integer


print ('The Lucky Winning Numbers Are ', format(lotteryNo()))

