#! /usr/bin/env python3
#Lucas Marchesani

from socket import *

HOST = '192.168.31.1'  # Standard loopback interface address (localhost)
PORT = 32000        # Port to listen on (non-privileged ports are > 1023)

with socket(AF_INET, SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        while True:
            domain = conn.recv(1024)
            ip = gethostbyname(domain)
            stuffs = gethostbyaddr(ip)
            print("Host Name for the IP address {} is {}".format(ip, stuffs[0]))
            if not domain:
                break