L, D = map(int, input().split())
K, P = map(int, input().split())
tollPoint = L // D
cost = L * K + tollPoint * P
print(cost)