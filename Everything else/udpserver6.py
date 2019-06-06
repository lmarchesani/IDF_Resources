#! /usr/bin/env python3
#Lucas Marchesani 

from socket import *

s = socket(AF_INET6, SOCK_DGRAM)
s.bind(("",15000))
s.listen(5)
c,a = s.accept()