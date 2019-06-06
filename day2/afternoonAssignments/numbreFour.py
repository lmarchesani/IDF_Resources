#! /usr/bin/env python3
#Lucas Marchesani

def main():
    userInput = input('Input data\n')
    print("Your input is",userInput)
    reverse_num = str(userInput)[::-1]
    print('Your number is now',reverse_num)
    input("Press anything to continue\n")
main()