#! /usr/bin/env python3
#Lucas Marchesani

def main():
    userInput = int(input('Input a number\n'))
    product = userInput

    while ((product*10)<100):
        product*=10

    print(product)
main()