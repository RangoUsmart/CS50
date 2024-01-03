from cs50 import get_float

cash = [25, 10, 5, 1]

while True:
    count = 0
    change = get_float("Change owed: ")

    if change < 0:
        change

    cents = round(change * 100)

    for coin in cash:
        count += cents // coin
        cents %= coin

    print(count)
    break
