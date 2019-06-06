#! /usr/bin/env python3
#Lucas Marchesani

def main():
    ruby = 'Ruby'
    names = []
    i =0
    print('Input 5 names')
    for i in range (0,5):
        userInput = input('Name = ')
        names.append(userInput)
    for i in range (0,5):
        if (names[i] == ruby):
            print("Hello Ruby")
            count = 1 
            break
        else:
            count = 0
            i+=1
    if (count==0):
        print('No ruby')
    input('')
main()