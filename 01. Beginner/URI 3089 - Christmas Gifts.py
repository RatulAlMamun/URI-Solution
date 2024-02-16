while True:
    N = int(input())
    if N == 0:
        break
    values = list(map(int, input().split()))
    pairs = [(values[i], values[2 * N - 1 - i]) for i in range(N)]
    pair_totals = [sum(pair) for pair in pairs]
    print(max(pair_totals), min(pair_totals))