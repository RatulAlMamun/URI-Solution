N = int(input())
for _ in range(N):
    data = list(map(int, input().split()))
    dataCount = data.pop(0)
    print(sum(data) - dataCount + 1)