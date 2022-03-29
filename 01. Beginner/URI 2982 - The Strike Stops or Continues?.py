N = int(input())
V = G = 0
for _ in range(N):
    T, C = input().split()
    if T == "V":
        V += int(C)
    else:
        G += int(C)
if V >= G:
    print("A greve vai parar.")
else:
    print("NAO VAI TER CORTE, VAI TER LUTA!")