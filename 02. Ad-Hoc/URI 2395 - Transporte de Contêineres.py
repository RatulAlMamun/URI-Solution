A, B, C = map(int, input().split())
X, Y, Z = map(int, input().split())
p , q, r = X // A, Y // B, Z // C
print(p * q * r)