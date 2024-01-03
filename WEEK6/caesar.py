# from cs50 import get_int
import sys

def getString():
    intext=input("Введіть текст: ")
    return intext
def change(txt,arg1): #, par
    diferent=[]
    for char in txt:
        newchar=ord(char)+int(arg1)
        if(newchar>ord("z"))
            newchar=newchar-ord("z")+ord("і")
        diferent.append(newchar)
    text = ''.join(chr(code) for code in diferent)
    return text


if __name__ == "__main__":
    text=getString()
    arguments = sys.argv
    res=change(text, arguments[1]) #, arguments[1]
    print(res)
