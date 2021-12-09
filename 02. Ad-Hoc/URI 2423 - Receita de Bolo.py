A, B, C = map(int, input().split())
A = A // 2
B = B // 3
C = C // 5
result = min(A, B, C)
print(result)