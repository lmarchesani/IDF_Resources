#! /usr/bin/env python3
#lucas Marchesani

def get_Coins(money):
    pennies=0
    nickels=0
    dimes=0
    quarters=0
    
    quarters = money//25
    money = money-(quarters*25)
    dimes = money//10
    money = money-(dimes*10)
    nickels = money//5
    money = money-(nickels*5)
    pennies = money//1
    money= money-(pennies*1)

    print("Quarters:",quarters)
    print("Dimes:",dimes)
    print("Nickels:",nickels)
    print("Pennies:",pennies)


def main():
    change = int(input('Input the the value of change you need\n'))
    if (change<0):
        print("invalid input")
        quit()
    if(change>100):
        print("invalid input")
        quit()
    get_Coins(change)
    input('')
main()