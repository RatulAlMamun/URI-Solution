N = int(input())
maximumFood = 0
food = 0
for i in range(N):
    boardLine = input()
    if i % 2:
        boardLine = boardLine[::-1]
    for cell in boardLine:
        if cell == 'o':
            food = food + 1
        elif cell == 'A':
            if maximumFood < food:
                maximumFood = food
            food = 0
if maximumFood < food:
    maximumFood = food
print(maximumFood)