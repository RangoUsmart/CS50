while True:
    number = input("Введіть ціле число: ")
    if not number.isdigit():
            number
    else:
        if 13<int(number)<17:
            for i in number:
                form=(int(number)-i)
                row=(" "*form)+("#"*i)
                print(row)
            break
        else:
             number
