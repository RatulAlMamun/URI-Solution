N = int(input())
result = 0
prev = -100
for _ in range(N):
    i = int(input())
    if i != prev:
        result = result + 1
    prev = i
print(result)