#! /usr/bin/env python3
#Lucas Marchesani 

from socket import *
s = socket(AF_INET, SOCK_DGRAM)
s.connect(("localhost",15000))
s.send(b"Hello World")