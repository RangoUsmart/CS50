# from cs50 import get_int
import sys

def getString():
    inputtext=

if __name__ == "__main__":
    arguments = sys.argv

    # Перший аргумент (arguments[0]) - назва скрипта, тому перший аргумент зазвичай починається з індексу 1
    # Виведення аргументів
    print("Аргументи командного рядка:", arguments)

    # Доступ до окремих аргументів
    if len(arguments) > 1:
        print("Перший аргумент:", arguments[1])
