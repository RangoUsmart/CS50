from crypt import crypt
from sys import argv

if len(argv) == 2:
    laterS = 'abcdefghijklmnopqrstuvwxyz'

    hashtext=argv[1]
    print(hashtext)
    salt = hashtext[:2]

else:
    print("USage: python crack.py hash")
    exit(1)
