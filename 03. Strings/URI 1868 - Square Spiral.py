def printBoardWithX(n, x, y):
    for i in range(n):
        for j in range(n):
            if i == x and j == y:
                print('X', end='')
            else:
                print('O', end='')
        print()
    print('@')
  
while True:
    N = int(input())
    if N == 0:
        break
    if N % 2:
        x = y = N // 2
        maxMove = 1
        move = 0
        direction = 'right'
        for i in range(N * N):
            printBoardWithX(N, x, y)
            if direction == 'right':
                y = y + 1
            elif direction == 'up':
                x = x - 1
            elif direction == 'left':
                y = y - 1
            else:
                x = x + 1
            move = move + 1
            if move == maxMove:
                if direction == 'right':
                    direction = 'up'
                elif direction == 'up':
                    direction = 'left'
                    maxMove = maxMove + 1
                elif direction == 'left':
                    direction = 'down'
                else:
                    direction = 'right'
                    maxMove = maxMove + 1
                move = 0
                