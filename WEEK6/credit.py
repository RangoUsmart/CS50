from cs50 import get_int

while True:
    try:
        number = input("Введіть ціле число: ")
        if (12 < len(number) < 17) :
            summ=0
            param1=number[-2::-2]
            for i in param1:
                summ=summ+int(i)*2
                # break
            print(summ)
        else:
            print("Число не знаходиться у діапазоні від 13 до 16 включно.")
    except ValueError:
        print("Ви ввели не ціле число. Спробуйте ще раз.")
