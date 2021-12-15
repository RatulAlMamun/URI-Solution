import math
while True:
    try:
        theta, base, height = map(float, input().split())
        H = (base * math.tan(theta / 180 * 3.141592654) + height) * 5
        print("%.2f" %H)
    except EOFError:
        break