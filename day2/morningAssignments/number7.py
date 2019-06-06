#! /usr/bin/env python3
#Lucas Marchesani

def main():
    product = int(input('Input your number you want to multiply by 10\n'))
    while((product*10)<100):
        product = product*10
        print(product)
    input("Press enter to continue to Phase 2\n")
    userChoice = 1
    while (userChoice==1):
        number1= int(input('Input your first number\n'))
        number2= int(input('Input your second number\n'))
        sumBodyOnceToldMe = number1+number2
        print(number1,'+',number2,"=",sumBodyOnceToldMe)
        userChoice = int(input('Input 1 to add two numbers, again\n'))
    input("Press enter to continue to Phase 3\n")
    number = 0
    while (number<1010):
        print(number, sep=' ', end=' ', flush=True)
        number+=10
main()