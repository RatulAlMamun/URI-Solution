D, I, X, F = map(int, input().split())
if D % 2 == 0 and F % 2 == 0:
    print(I)
elif D % 2 == 0 and F % 2 == 1:
    print(I - X)
if D % 2 == 1 and F % 2 == 0:
    print(I)
if D % 2 == 1 and F % 2 == 1:
    print(I + X)