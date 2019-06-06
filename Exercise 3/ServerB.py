#! /usr/bin/env python3
# lucas marchesani

from socket import *
import json

with socket(AF_INET, SOCK_STREAM) as s:
    s.bind(('192.168.31.1', 32000))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        while True:
            data = conn.recv(1024)
            if not data:
                break
            service = getservbyport(int(data))
            print(service)