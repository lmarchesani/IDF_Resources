#! /usr/bin/env python3
#Lucas Marchesani

from socket import *

HOST = '192.168.31.1'  # Standard loopback interface address (localhost)
PORT = 32000        # Port to listen on (non-privileged ports are > 1023)

with socket(AF_INET, SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    domain = input("enter the website domain name: ")
    s.sendall(domain.encode())