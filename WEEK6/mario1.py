number = input("Введіть ціле число: ")
while int(number):
    if 0<number<9:
        for i in range(1, number+1):
            form=number-i
            row=(" "*form)+("#"*i)
            print(row)
else:
    break

