while True:
    N = int(input())
    if N < 0:
        break
    debts = list(map(int, input().split()))
    cumulativeDebt = 0
    result = 0
    for debt in debts:
        cumulativeDebt = cumulativeDebt + debt
        if cumulativeDebt % 100 == 0:
            result = result + 1
    print(result)