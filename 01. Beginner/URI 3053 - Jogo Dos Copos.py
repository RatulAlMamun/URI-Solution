N = int(input())
startPosition = input()
if startPosition == 'A':
    gameBoard = [True, False, False]
elif startPosition == 'B':
    gameBoard = [False, True, False]
else:
    gameBoard = [False, False, True]
for _ in range(N):
    move= int(input())
    if move == 1:
        gameBoard[0], gameBoard[1] = gameBoard[1], gameBoard[0]
    elif move == 2:
        gameBoard[1], gameBoard[2] = gameBoard[2], gameBoard[1]
    else:
        gameBoard[0], gameBoard[2] = gameBoard[2], gameBoard[0]

if gameBoard[0]:
    print('A')
elif gameBoard[1]:
    print('B')
else:
    print('C')