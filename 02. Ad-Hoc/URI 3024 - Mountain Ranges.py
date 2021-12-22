N, X = map(int, input().split())
A = list(map(int, input().split()))
count = 1
maximum = 0
for i in range(len(A) - 1):
    if A[i + 1] - A[i] <= X:
        count = count + 1
    else:
        if maximum < count:
            maximum = count
        count = 1
if maximum < count:
    maximum = count     
print(maximum)