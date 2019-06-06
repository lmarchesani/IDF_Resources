#! /usr/bin/env python3

def mystery (a,b):
    for i in range (len(a)):
        a[i] += b[len(b)-1-i]
        print (a[i])


def main():
    a1 = [1,3,5,7,9]
    a2 = [1,4,9,16,25]
    mystery(a1,a2)
main()

