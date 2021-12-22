X, Y = map(int, input().split())
i = 1
while True:
    if ((X * i) < (Y * i)) and ((Y*i) < (X * (i + 1))):
        i = i + 1
    else:
        print(i + 1)
        break