N = int(input())
perUnitPrice = []
for _ in range(N):
    P, G = map(str, input().split())
    perUnitPrice.append(float(P) / float(G))
print("{:.2f}".format(min(perUnitPrice) * 1000))
