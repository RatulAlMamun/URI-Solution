while True:
    N, M = map(int, input().split())
    if N == 0 and M == 0:
        break
    matrix = []
    for _ in range(N):
        matrix.append(list(map(int, input().split())))
    transpose_matrix = [list(row) for row in zip(*matrix)]
    counter = 0
    if not(any(all(1 == j for j in matrix[i]) for i in range(len(matrix)))):
        counter += 1
    if all(any(1 == j for j in transpose_matrix[i]) for i in range(len(transpose_matrix))):
        counter += 1
    if not(any(all(1 == j for j in transpose_matrix[i]) for i in range(len(transpose_matrix)))):
        counter += 1
    if all(any(1 == j for j in matrix[i]) for i in range(len(matrix))):
        counter += 1
    print(counter)