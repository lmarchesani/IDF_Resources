#!/usr/bin/env python3
#Lucas Marchesani

from socket import *
import json
released = {
		"iphone" : 2007,
		"iphone 3G" : 2008,
        "iphone 4" : 2009
	}

HOST = '192.168.31.1'
with socket(AF_INET, SOCK_DGRAM) as s:
     s.connect((HOST, 32000))
     thingy_json = json.dumps(released, indent =4)
     send_this = thingy_json.encode()
     s.sendall(send_this)   



