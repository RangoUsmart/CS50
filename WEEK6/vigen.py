# from cs50 import get_int
import sys

def getString():
    intext=input("Введіть текст: ")
    
    return intext

# def revad(a, sym):
#     newsym=""

#     return newsym

def change(txt,arg1): #, par
    keymap = [ord(char) for char in arg1]
    # print(keymap)
    diferent=[]
    kety=0
    for index, char in enumerate(txt):
        # print(int(keymap[index%len(keymap)])%26)

        if (ord("a")<=ord(char)<=ord("z")):

            newchar=ord(char)+int(keymap[(index-kety)%len(keymap)])%ord("a")
            print(kety)
            if(newchar>ord("z")):
                newchar=newchar-ord("z")+ord("a")-1
                diferent.append(newchar)
            else:
                diferent.append(newchar)
        elif (ord("A")<=ord(char)<=ord("Z")):
            newchar=ord(char)+int(keymap[index%len(keymap)])%ord("A")
            if(newchar>ord("Z")):
                newchar=newchar-ord("Z")+ord("A")-1
                diferent.append(newchar)
            else:
                diferent.append(newchar)
        else:
             diferent.append(ord(char))
             kety+=1
    text = ''.join(chr(code) for code in diferent)
    text = "ciphertext: "+text
    return text

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python caesar.py k")
        sys.exit(1)  # Завершення програми з кодом виходу 1

    text = getString()
    res = change(text, sys.argv[1])
    print(res)
