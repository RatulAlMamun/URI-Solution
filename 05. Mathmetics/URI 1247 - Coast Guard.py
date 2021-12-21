import math
while True:
    try:
        D, VF, VG = map(int, input().split())
        GD = math.sqrt(144 + (D * D))
        TF = 12 / VF
        TG = GD / VG
        if TF >= TG:
            print("S")
        else:
            print("N")
    except EOFError:
        break