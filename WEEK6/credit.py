from cs50 import get_int
while True:
    try:
        number = get_int("Введіть ціле число: ")
        print("Ваше число:", number)
        break  # Якщо користувач ввів число, вийти з циклу
    except ValueError:
        print("Це не число. Спробуйте ще раз.")

print("Введене число:", number)
