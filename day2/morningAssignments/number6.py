#! /usr/bin/env python3
#Lucas Marchesani

def main():
    package=99
    print("One package is $99\n")
    quantity = int(input('Insert how many packages you would like to order\n'))
    
    if((quantity<=19)&(quantity>=10)):
        price = package*quantity
        price = price*.8
        print("You received a 20 percent discount\nYour total is now",price)
    elif((quantity<=49)&(quantity>=20)):
        price = package*quantity
        price = price*.7
        print("You received a 30 percent discount\nYour total is now",price)
    elif((quantity<=99)&(quantity>=50)):
        price = package*quantity
        price = price*.6
        print("You received a 40 percent discount\nYour total is now",price)
    elif(quantity>=100):
        price = package*quantity
        price = price*.5
        print("You received a 50 percent discount\nYour total is now",price)
main()
input('')