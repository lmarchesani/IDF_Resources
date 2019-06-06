#!/usr/bin/env python3

from socket import *

HOST = '127.0.0.1'  # The server's hostname or IP address
PORT = 65432        # The port used by the server

with socket(AF_INET, SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    data = s.recv(1024)
    ip = s.recv(1024)
print('Received ', data , ip)