from cs50 import get_int

while True:
    try:
        number = get_int("Введіть ціле число: ")
        # number = int(user_input)
        if 12 < number < 17:
            print("Ваше число:", number)
            break
        else:
            print("Число не знаходиться у діапазоні від 13 до 16 включно.")
    except ValueError:
        print("Ви ввели не ціле число. Спробуйте ще раз.")
