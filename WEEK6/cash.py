while True:
    cash=[25, 10, 5, 1]
    number = input("Введіть число: ")
    try:
        fnum = float(number)  # Спроба перетворити введене значення у float
        inum = int(number)  # Спроба перетворити введене значення у float
        res=fnum-inum
        print("Введено число з плаваючою точкою:", res)
        break  # Вихід з циклу після успішного введення числа
    except ValueError:
        number


