# import two functions
from cs50 import get_float

# prompt user for an ampunt of change and check its validity
cash=[25, 10, 5, 1]
while True :

    change = get_float("change owed :")
    if change > 0 :
        break

change=round(change*100)


for i in cash):
    print(i)
