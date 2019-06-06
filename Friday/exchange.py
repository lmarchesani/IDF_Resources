#! /usr/bin/env python3
#lucas Marchesani

def main():
    exist = 0
    filename = open("Exchrate.txt",'r')
    the_chosen_one = input("Enter a country: ")
    the_chosen_one = the_chosen_one.lower()
    for line in filename:
        line = line.strip()
        data = line.split(',')
        data[0] = data[0].lower()
        if data[0] == the_chosen_one:
            print("currency:",data[1],"\nExchange rate:",data[2])
            exist+=1
        else:
            continue
    if (exist == 0):
        print("Enter a country on the list next time, bud\n")
    input('')
main()