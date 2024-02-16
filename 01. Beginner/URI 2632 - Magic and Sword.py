import math

def spell(magic, level):
    fire = [200, 20, 30, 50]
    water = [300, 10, 25, 40]
    earth = [400, 25, 55, 70]
    air = [100, 18, 38, 60]
    if magic == 'fire':
        radius = fire[level]
        value = fire[0]
    elif magic == 'water':
        radius = water[level]
        value = water[0]
    elif magic == 'earth':
        radius = earth[level]
        value = earth[0]
    else:
        radius = air[level]
        value = air[0]
    return (value, radius)

def pointToLineDistance(P, L1, L2):
    A = P[0] - L1[0]
    B = P[1] - L1[1]
    C = L2[0] - L1[0]
    D = L2[1] - L1[1]
    dot = A * C + B * D
    squareLength = C * C + D * D
    param = -1;
    if squareLength != 0:
        param = dot / squareLength
    if param < 0:
        Q = L1
    elif param > 1:
        Q = L2
    else:
        Q = (L1[0] + param * C), (L1[1] + param * D)
    d = P[0] - Q[0], P[1] - Q[1]
    return math.sqrt(d[0] * d[0] + d[1] * d[1])

N = int(input())
for _ in range(N):
    w, h, x0, y0 = map(int, input().split())
    magic, level, cx, cy = map(str, input().split())
    cx, cy, level = int(cx), int(cy), int(level)
    x1, y1 = x0 + w, y0
    x2, y2 = x0, y0 + h
    x3, y3 = x0 + w, y0 + h
    damage, radius = spell(magic, level)
    if x0 < cx < x1 and y0 < cy < y2:
        print(damage)
    else:
        distance0 = pointToLineDistance((cx, cy), (x0, y0), (x1, y1))
        distance1 = pointToLineDistance((cx, cy), (x0, y0), (x2, y2))
        distance2 = pointToLineDistance((cx, cy), (x3, y3), (x1, y1))
        distance3 = pointToLineDistance((cx, cy), (x3, y3), (x2, y2))
        if radius >= distance0 or radius >= distance1 or radius >= distance2 or radius >= distance3:
            print(damage)
        else:
            print(0)
