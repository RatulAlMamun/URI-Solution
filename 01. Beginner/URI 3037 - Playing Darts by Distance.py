N = int(input())
for _ in range(N):
    john = 0
    mary = 0
    for _ in range(3):
        X, D = map(int, input().split())
        john += (X * D)
    for _ in range(3):
        X, D = map(int, input().split())
        mary += (X * D)
    if john < mary:
        print("MARIA")
    else:
        print("JOAO")