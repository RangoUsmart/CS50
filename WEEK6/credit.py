from cs50 import get_int
digits = []
while True:
    try:
        number = input("Введіть ціле число: ")
        if (12 < len(number) < 17) :
            summ=0
            param1=number[-2::-2]
            print(param1)
            for i in param1:
                dub=int(i)*2
                if dub>9:
                    txt=str(dub)
                    summ=summ+int(txt[0])+int(txt[1])
                    # print(summ)
                else:
                    summ=summ+dub
            param2=number[::-2]
            for i in param2:
                summ=summ+int(i)
            print(summ)
            if summ%20==0:
                combinedNumber = int(number[:2])
                if(combinedNumber==34 or combinedNumber==35 or combinedNumber==37):

                    print("AMEX\n")
                elif(int(number[:1])==4):
                    print("VISA\n")
                elif(combinedNumber==54 or combinedNumber==55 or combinedNumber==51):
                    print("MASTERCARD\n")
                else:
                    print("INVALID\n")
            else:
                print("INVALID")

        else:
            print("INVALID")
    except ValueError:
        print("Ви ввели не ціле число. Спробуйте ще раз.")
