# from cs50 import get_int
import sys

def getString():
    intext=input("Введіть текст: ")
    return intext
def change(txt): #, par
    ascii_list = [ord(char) for char in txt]

    print("ASCII-коди символів:", ascii_list)

if __name__ == "__main__":
    text=getString()
    # arguments = sys.argv
    res=change(text) 
    # print(res)
