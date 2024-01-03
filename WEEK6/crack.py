from crypt import crypt
from sys import argv

def find_word(letters, length, target_word):
    word = ''
    for _ in range(length):
        for letter in letters:
            new_word = word + letter
            if new_word == target_word:
                return new_word
    return None

if len(argv) == 2:
    laterS = 'abcdefghijklmnopqrstuvwxyz'
    laterL = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

    hashtext=argv[1]
    print(hashtext)
    salt = hashtext[:2]

    tri1=find_word(dict, i, hashtext)


else:
    print("USage: python crack.py hash")
    exit(1)
