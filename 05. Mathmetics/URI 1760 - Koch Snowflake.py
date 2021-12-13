import math
try:
    while True:
        l = float(input())
        area = (2 * math.sqrt(3) * l * l) / 5
        print("%.2f" %area)
except EOFError:
    pass