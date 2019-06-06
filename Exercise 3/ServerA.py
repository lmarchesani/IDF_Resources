#! /usr/bin/env python3
#lucas marchesani

from socket import *
import json

with socket(AF_INET, SOCK_STREAM) as s:
    s.bind(('192.168.31.1', 32000))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        while True:
            print('connected')
            data = conn.recv(8192)
            send_it_back = ntohl(int(data))
            print(send_it_back)
            send_it_back = str(send_it_back)
            conn.send(send_it_back.encode('utf-8'))
            