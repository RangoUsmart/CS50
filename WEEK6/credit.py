from cs50 import get_int

while True:
    try:
        number = input("Введіть ціле число: ")
        if (12 < len(number) < 17) :
            param1=my_list[-2::-2]
            # for i in number:
            #     print("Ваше число:", number)
                break
        else:
            print("Число не знаходиться у діапазоні від 13 до 16 включно.")
    except ValueError:
        print("Ви ввели не ціле число. Спробуйте ще раз.")
