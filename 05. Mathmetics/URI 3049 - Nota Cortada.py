B = int(input())
T = int(input())
one = ((B + T) / 2) * 70
two = 11200 - one
if one > two:
    print(1)
elif one < two:
    print(2)
else:
    print(0)