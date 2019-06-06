#! /usr/bin/env python3
#Lucas Marchesani


def reverse(number):
    print("Your input is",number)
    reverse_num = str(number)[::-1]
    print("Your input is now",reverse_num)
    palindrome(number)
    
def palindrome(number):
    backwards = str(number)[::-1]
    if (backwards==number):
        print('your number is a palindrome\n')
        return 1

def main():
    userInput = input('Input data\n')
    reverse(userInput)
    input("Press anything to continue\n")
main()


    

