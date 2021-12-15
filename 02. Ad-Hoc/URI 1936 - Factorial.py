factorial = [1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800]
N = int(input())
i = 0
count = 0
for num in factorial:
    if num > N:
        index = i
        break
    i += 1
for num in range(index-1, -1, -1):
    while N - factorial[num] >= 0:
        count += 1
        N -= factorial[num]
print(count)