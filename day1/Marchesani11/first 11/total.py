#! /usr/bin/env python3
#Lucas Marchesani

item1 = float(input('Input your first items price\n'))
item2 = float(input('Input your second items price\n'))
item3 = float(input('Input your third items price\n'))
item4 = float(input('Input your fourth items price\n'))
item5 = float(input('Input your fifth items price\n'))

total = item1 + item2 + item3 + item4 + item5

print('Your subtotal is ',total)

total = total * 1.06

print('Your total is ',total)
input('')


