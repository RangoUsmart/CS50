from crypt import crypt
from sys import argv

def find_word(letters, length, target_word, key):
    word = ''
    for _ in range(length):
        for letter in letters:
            new_word = word + letter
            if crypt(new_word, key) == target_word:
            # if new_word == target_word:
                print new_word
    return None

if len(argv) == 2:
    laterS = 'abcdefghijklmnopqrstuvwxyz'
    laterL = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    diction=
    hashtext=argv[1]
    print(hashtext)
    salt = hashtext[:2]
    for i in range(1,5)
        tri1=find_word(dict, i, hashtext, salt)
else:
    print("USage: python crack.py hash")
    exit(1)
