#! /usr/bin/env python3
#Lucas Marchesani

from socket import *

HOST = '127.0.0.1'  # Standard loopback interface address (localhost)
PORT = 65432        # Port to listen on (non-privileged ports are > 1023)

with socket(AF_INET, SOCK_STREAM) as s:
   s.bind((HOST, PORT))
   s.listen()
   conn, addr = s.accept()
   with conn:
       print('Connected by', addr)
       while True:
           hostname = gethostname()
           print (hostname)
           conn.sendall(hostname.encode('utf-8'))
           hostname=gethostbyname(hostname)
           print (hostname)
           conn.send(hostname.encode('utf-8'))
