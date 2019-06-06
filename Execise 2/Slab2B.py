#! /usr/bin/env python3
#Lucas Marchesani

from socket import *
import json

Host = '192.168.31.1'

with socket(AF_INET, SOCK_DGRAM) as s:
    s.bind((Host, 32000))
    receive_thispls = s.recv(8192)
    print(receive_thispls)