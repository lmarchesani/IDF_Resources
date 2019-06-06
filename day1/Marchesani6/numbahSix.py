#! /usr/bin/env python3
#Lucas Marchesani

salesRev = float(input("Input your total sales\n"))

countyTax = salesRev *.02
stateTax = salesRev *.04
totalTax = countyTax+stateTax
salesRev = salesRev-totalTax

print("County tax:",countyTax)
print("State tax:", stateTax)
print("Total taxes deducted:",totalTax)
print("Net Revenue:",salesRev)
