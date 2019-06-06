#!/usr/bin/env python3

from socket import *
from binascii import *
def main():
    HOST = '10.128.102.115'  # The server's hostname or IP address
    PORT = 3000       # The port used by the server
    keys = ['5V&$10jr@y', 'As26yx*uTB', '5V8tY7&ox^']
    hexcode = '08300678313970250d1609437c'

    with socket(AF_INET, SOCK_STREAM) as s:
        s.connect((HOST, PORT))
        data = s.recv(1024)
    print('Connection success')
    data = data.decode("utf-8")
    
    #convert the stuff in keys to decimal
    for x in keys:  #x is the key
        lister = ""
        for letter in x:
            lister += str(ord(letter))
        print(lister)
main()