V, T = map(int, input().split())
soundList = list(map(int, input().split()))
for i in soundList:
    V += i
    if V >= 100:
        V = 100
    elif V <= 0:
        V = 0
print(V)