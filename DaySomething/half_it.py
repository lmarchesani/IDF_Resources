#! /usr/bin/bash
#Lucas Marchesani

def half(number):
    number/=2
    return number

def main():
    userInput = float(input('Input your number to be halfed\n'))
    result = half(userInput)
    print(result,'\n')
main()