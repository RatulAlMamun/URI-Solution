F1, F2 = map(float, input().split())
print("{:.6f}".format((((1.0 + (F1/100.0)) * (1.0 + (F2/100.0))) - 1.0) * 100.0))