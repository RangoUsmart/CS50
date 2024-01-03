from cs50 import get_int

while True:
    number = get_int("Введіть ціле число: ")
    try:
        if (12<number<17):
            print("Ваше число:", number)
            break  # Якщо користувач ввів число, вийти з циклу
    except ValueError:
        number

print("Введене число:", number)
