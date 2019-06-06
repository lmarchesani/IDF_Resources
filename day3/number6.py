#! /usr/bin/env python3 
# Lucas Marchesani

def main():
    sales = []
    total = 0.0
    for i in range (0,7):
        print("Input sales total for day", i+1)
        value = float(input(""))
        sales.append(value)
        total += sales[i]

    print("Your total revenue is",total)
    input('')
main()