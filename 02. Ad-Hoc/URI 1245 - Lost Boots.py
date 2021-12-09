try:
    while True:
        D = [0] * 61
        E = [0] * 61
        count = 0
        N = int(input())
        for i in range(N):
            M, L = input().split()
            M = int(M)
            if L == "D":
                D[M] = D[M] + 1
            else:
                E[M] = E[M] + 1

        for i in range(30, 61):
            if D[i] and E[i]:
                if D[i] == E[i]:
                    count = count + D[i]
                elif D[i] < E[i]:
                    count = count + D[i]
                else:
                    count = count + E[i]

        print(count) 
        
except EOFError:
    pass