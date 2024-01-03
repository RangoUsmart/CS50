while True:
    cash=[25, 10, 5, 1]
    number = input("Введіть число: ")
    try:
        number = float(number)  # Спроба перетворити введене значення у float
        print("Введено число з плаваючою точкою:", number)
        break  # Вихід з циклу після успішного введення числа
    except ValueError:
        number


