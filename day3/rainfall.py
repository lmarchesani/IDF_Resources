#! /usr/bin/env python3
#Lucas Marchesani

def main():
    userInput = []
    for i in range (0,12):
        print("For month number",i+1,)
        Rain = int(input("Input rainfall total for this month\n"))
        userInput.append(Rain)


    total = 0 
    for i in range (0,12):
        total += userInput[i]
        i+=1
    print("Your total rainfall is",total)
    total /=12
    print("The average rain fall is ",total)
    minimum_month = min(userInput)
    maximum_month = max(userInput)
    for i in range (0,12):
        if (minimum_month == userInput[i]):
            print("The month with the lowest total is month",i+1)
    for i in range (0,12):
        if (maximum_month == userInput[i]):
            print("The month with the highest total is month",i+1)

main()
