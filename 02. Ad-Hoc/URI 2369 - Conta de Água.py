N = int(input())
amount = 7
for i in range(11, N + 1):
    if i <= 30:
        amount += 1
    elif i <= 100:
        amount += 2
    else:
        amount += 5
print(amount)