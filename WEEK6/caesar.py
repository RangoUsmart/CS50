# from cs50 import get_int
import sys

def getString():
    intext=input("Введіть текст: ")
    return intext
def change(txt,arg1): #, par
    diferent=[]
    for char in txt
        diferent.append(ord(char)+int(arg1))
    # for ckar in (ord("a"), ord("z"))
    # print("ASCII-коди символів:", ascii_list)
    text = ''.join(chr(code) for code in diferent)
    return text


if __name__ == "__main__":
    text=getString()
    # arguments = sys.argv
    res=change(text) #, arguments[1]
    print(res)
