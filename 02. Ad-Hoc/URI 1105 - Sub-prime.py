while True:
    B, N = map(int, input().split())
    if B == 0 and N == 0:
        break
    reserves = list(map(int, input().split()))
    for _ in range(N):
        D, C, V = map(int, input().split())
        reserves[D - 1] = reserves[D - 1] - V
        reserves[C - 1] = reserves[C - 1] + V
    
    flag = 0
    for i in range(B):
        if (reserves[i] < 0):
            flag = 1
            break
    
    if flag:
        print("N")
    else:
        print("S")