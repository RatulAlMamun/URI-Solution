import math 
C = int(input())
for _ in range(C):
    N, M = map(int, input().split())
    result = int(1 + M * math.log10(N))
    print(result)