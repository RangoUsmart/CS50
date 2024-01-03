from cs50 import get_int
digits = []
while True:
    try:
        number = input("Введіть ціле число: ")
        if (12 < len(number) < 17) :
            summ=0
            param1=number[-2::-2]
            for i in param1:
                dub=int(i)*2
                # print(dub)
                if dub>9:
                    while dub > 0:
                        digit = dub % 10
                        summ=summ+digit*2
                        # print(f"{digit} --")
                        dub //= 10
                else:
                    summ=summ+dub

            print(summ)
                # break
            param2=number[::-2]
            for i in param2:
                summ=summ+int(i)

            print(summ)
        else:
            print("Число не знаходиться у діапазоні від 13 до 16 включно.")
    except ValueError:
        print("Ви ввели не ціле число. Спробуйте ще раз.")
