#! /usr/bin/env python3
#lucas Marchesani

def main():
    interest_value = float(input("Input your interest rate(%)\n"))
    principle_value = float(input("Input your principle value\n"))
    years = int(input("Input the number of years you will pay\n"))
    total_payments = float(years*12)
    rate = interest_value/(100*12)
    payment = principle_value*((rate*(1+rate)**total_payments)/((1+rate)**total_payments-1))
    print("Monthly payment = {:.2f}".format(payment))

    input('')
main()
    