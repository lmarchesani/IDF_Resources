#! /usr/bin/env python3
#Lucas Marchesani
# 8 characters, letters and digits only, two digits
def main():
    password = input("Input your password you would like to test\t")
    letters = 0 
    digit = 0 
    space = 0 
    other = 0
    length = len(password)
    for i in password:
        if i.isalpha():
            letters+=1
        elif i.isnumeric():
            digit+=1
        elif i.isspace():
            space+=1
        else:
            other+=1
    if ((space == 0) and (digit >= 2) and (other == 0) and(length>=8)):
        print("Valid Password")
    else:
        print("Invalid Password")
    input('')
main()