from crypt import crypt
from sys import argv

if len(argv) == 2:

    hashtext=sys.argv[1]
    print(hashtext)

else:
    print("USage: python crack.py hash")
    exit(1)
