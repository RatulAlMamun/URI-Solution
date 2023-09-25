E, F, C = map(int, input().split())
total = E + F
count = 0
while total >= C:
    temp = total // C
    count += temp
    total = (total % C) + temp
print(count)
