#! /usr/bin/env python3
# lucas marchesani

from socket import *
tester = 2004
with socket(AF_INET, SOCK_STREAM) as s:
    s.connect(('192.168.31.1', 32000))
    number = int(input("enter a number: "))
    sender = htonl(number)
    sender = str(sender)
    s.send(str(sender).encode())
    var = s.recv(1024)
    print(int(var))