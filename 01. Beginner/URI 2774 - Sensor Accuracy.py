import math
try:
    while True:
        H, M = map(int, input().split())
        measurements = list(map(float, input().split()))
        QT = len(measurements)
        mean = sum(measurements) / QT
        result = math.sqrt(sum((x - mean) ** 2 for x in measurements) / (QT - 1))
        print('{:0.5f}'.format(result))
except EOFError:
    pass
