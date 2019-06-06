#! /usr/bin/env python3
#Lucas Marchesani

def main():
    #diamond
    topper()
    bottom()
    input('\npress enter to continue to the next shape\n')
    #crossy boi
    bottom()
    topper()
    input('\npress enter to continue to the next shape\n')
    topper()
    boxBoi()
    print("|United|")
    print("|States|")
    boxBoi()
    topper()

def topper():
    print("    /\\")
    print("   /  \\")
    print("  /    \\")
main()

def bottom():
    print("  \\    /")
    print("   \\  /")
    print("    \\/")
main()

def boxBoi():
    print("+------+")
    print("|      |")
    print("|      |")
    print("|      |")
    print("+------+")
main()