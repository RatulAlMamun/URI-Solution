N = int(input())
maximum = 0
carlos = 0
for i in range(N):
    V = int(input())
    if V > maximum:
        maximum = V
        if i == 0:
            carlos = V
if carlos == maximum:
    print("S")
else:
    print("N")