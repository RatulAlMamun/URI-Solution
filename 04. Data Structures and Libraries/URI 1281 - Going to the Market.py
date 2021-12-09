N = int(input())
for i in range(N):
    price = {}
    amount = {}
    totalPrice = 0
    M = int(input())
    for i in range(M):
        name, unitPrice = input().split()
        unitPrice = float(unitPrice)
        price[name] = unitPrice

    P = int(input())
    for i in range(P):
        name, value = input().split()
        value = int(value)
        amount[name] = value

    for key in amount:
        totalPrice = totalPrice + (amount[key] * price[key])

    print("R$ %.2f" % totalPrice)