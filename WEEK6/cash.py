# import two functions
from cs50 import get_float

# prompt user for an ampunt of change and check its validity
while True :
    cash=[25, 10, 5, 1]
    change = get_float("change owed :")
    if change > 0 :
        break

change=round(change*100)


