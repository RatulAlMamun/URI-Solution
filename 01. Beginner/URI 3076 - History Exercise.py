import math
while True:
    try:
        N = int(input())
        print(math.ceil(N / 100))
    except EOFError:
        break