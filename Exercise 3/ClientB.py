#! /usr/bin/env python3
# lucas marchesani

from socket import *


with socket(AF_INET, SOCK_STREAM) as s:
    s.connect(('192.168.31.1', 32000))
    s.sendall(b'23')
    print('connected')