# angle between hour and minute hand formula Converted into function
def timeToAngle(h, m):
    return int(0.5 * (60 * h - 11 * m))   

# Created possible angle list for all the time in this problem
angle_list = []
for hour in range(0, 12, 1):
    for miniute in range(0, 60, 12):
        angle = abs(timeToAngle(hour, miniute))
        angle_list.append(angle if angle <= 180 else 360 - angle)

# Solution Start from here (Every number on list is divisible by 6)
while True:
    try:
        A = int(input())
        if A in angle_list:
            print('Y')
        else:
            print('N')
    except EOFError:
        break