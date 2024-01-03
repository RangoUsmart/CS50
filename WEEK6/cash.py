while True:
    number = input("Введіть ціле число: ")
    if not number.isdigit():
            number
    else:
        if 0<int(number)<9:
            for i in range(1, int(number)+1):
                form=(int(number)-i)
                row=(" "*form)+("#"*i)
                midd=(" "*2)
                row2=("#"*i)
                print(row+midd+row2)
            break
        else:
             number

