while True:
    N, M = map(int, input().split())
    if N == 0 and M == 0:
        break
    drawing = []
    result = []
    for _ in range(N):
        drawing.append(input())
    A, B = map(int, input().split())
    row = A // N
    col = B // M
    for i in range(N):
        line = ''
        for j in range(M):
            line += drawing[i][j] * col
        for _ in range(row):
            result.append(line)
    for i in range(len(result)):
        print(result[i])
    print()