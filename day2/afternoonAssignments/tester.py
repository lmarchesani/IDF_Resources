#! /usr/bin/env python 3
#Lucas Marchesani

def touch (coke,soda,pop):
    print("say",soda,"not",pop,"or",coke)

def main():
    soda = 'coke'
    pop = 'pepsi'
    coke = 'pop'
    pepsi = 'soda'
    say = pop

    touch (coke,soda,pop)
    touch (pop,pepsi,pepsi)
    touch ("pop",pop,"koolaid")
    touch (say, "say",pop)
main()