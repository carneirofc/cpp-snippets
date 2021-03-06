#!/usr/bin/env python3
import socket
import time

messages = [
        'get float\n',
        'set float 100.0\n',
        'set float_test 200.0\n'
        ]

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect the socket to the port where the server is listening
server_address = ('localhost', 5000)
s.connect(server_address)

try:
    while True:
        # Send data
        for m in messages:
            message = m.encode('utf-8')
            print('> {}'.format(message))
            s.sendall(message)
            data = s.recv(128)
            print('< {}'.format(data))
            time.sleep(1)
finally:
    print('closing socket')
    s.close()
