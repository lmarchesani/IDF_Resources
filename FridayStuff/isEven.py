#! /usr/bin/env python3
#Lucas Marchesani

def count_even_digits(input_number, digit_count):
    #refer to this by element index
    tester = [int(i) for i in str(input_number)]
    even_count = 0 
    i=0
    # iterating each number in list 
    for num in tester: 
        # checking condition 
        if num % 2 == 0: 
            even_count += 1
            i+=1
        else: 
            i+=1
    print("Even numbers in the list: ", even_count) 



def main():
    userInput = int(input("Input your number\n"))
    digits = len(str(userInput))
    
    count_even_digits(userInput, digits)

    input('')
main()