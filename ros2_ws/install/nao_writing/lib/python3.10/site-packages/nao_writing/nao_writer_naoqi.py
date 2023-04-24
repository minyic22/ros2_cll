import socket
import json

HOST = '172.25.96.1'    # IP address of the server
PORT = 12345

data = {'name': 'Nao', 'age': 6}
json_data = json.dumps(data).encode('utf-8')

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # TCP
s.connect((HOST, PORT))
s.sendall(json_data)
s.close()


