number = int(input("Введіть ціле число: "))
if 0<number<9:
    for i in range(1, number+1):
        
        row=" "+("#"*i)
        print("#"*i)
