#! /usr/bin/env python3
#Lucas Marchesani 

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()