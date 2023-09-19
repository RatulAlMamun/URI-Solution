N = int(input())
board = [0] * N
for i in range(N):
    n = int(input())
    if n:
        board[i] += 1
        if i + 1 < N:
            board[i + 1] += 1
        if i > 0:
            board[i - 1] += 1
print(*board, sep='\n')
