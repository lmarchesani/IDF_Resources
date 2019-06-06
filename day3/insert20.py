#! /usr/bin/env python3
#Lucas Marchesani

def main():
    userInput = []
    for i in range (0,20):
        print("Insert number",i+1)
        Rain = int(input(""))
        userInput.append(Rain)


    total = 0 
    for i in range (0,20):
        total += userInput[i]
        i+=1
    print("Your total is",total)
    total /=20
    print("The average is ",total)
    minimum_month = min(userInput)
    print("The lowest total is ",minimum_month)
    maximum_month = max(userInput)
    print("The highest total is ",maximum_month)
    

main()