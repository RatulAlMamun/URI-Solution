N, C, M = map(int, input().split())
X = list(map(int, input().split()))
Y = list(map(int, input().split()))
missing = 0
for i in X:
    if i not in Y:
        missing = missing + 1
print(missing)