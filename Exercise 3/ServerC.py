#! /usr/bin/env python3
# lucas marchesani

from socket import *

with socket(AF_INET, SOCK_STREAM) as s:
    print ("hello")