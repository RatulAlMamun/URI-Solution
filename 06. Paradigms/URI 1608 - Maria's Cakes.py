testCase = int(input())
for _ in range(testCase):
    D, I, B = map(int, input().split())
    priceOfIngredients = list(map(int, input().split()))
    cake_amount = []
    for _ in range(B):
        cake_description = list(map(int, input().split()))
        total_price = 0
        for i in range(1, len(cake_description), 2):
            total_price = total_price + (cake_description[i + 1] * priceOfIngredients[cake_description[i]])
        cake_amount.append(D // total_price)
    print(max(cake_amount))