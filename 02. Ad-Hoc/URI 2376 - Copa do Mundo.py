nextRound = []
index = 0
for i in range(0, 16, 2):
    a, b = map(int, input().split())
    if a > b:
        nextRound.append(i)
    else:
        nextRound.append(i + 1)
    index = index + 1

index = 0
for i in range(0, 8, 2):
    a, b = map(int, input().split())
    if a > b:
        nextRound[index] = nextRound[i]
    else:
        nextRound[index] = nextRound[i + 1]
    index = index + 1

index = 0
for i in range(0, 4, 2):
    a, b = map(int, input().split())
    if a > b:
        nextRound[index] = nextRound[i]
    else:
        nextRound[index] = nextRound[i + 1]
    index = index + 1

a, b = map(int, input().split())
if a > b:
    print(chr(nextRound[0] + 65))
else:
    print(chr(nextRound[1] + 65))