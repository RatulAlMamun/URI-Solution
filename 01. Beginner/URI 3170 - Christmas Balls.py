B = int(input())
G = int(input())

ballsNeed = (G // 2) - B 

if ballsNeed > 0:
    print("Faltam", ballsNeed, "bolinha(s)")
else:
    print("Amelia tem todas bolinhas!")