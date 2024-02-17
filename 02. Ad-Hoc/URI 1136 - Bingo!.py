while True:
    N, B = map(int, input().split())
    if N == 0 and B == 0:
        break
    balls = list(map(int, input().split()))
    source = set()

    for i in range(len(balls)):
        source.add(balls[i])
        for j in range(i + 1, len(balls)):
            source.add(abs(balls[j] - balls[i]))

    if len(source) == N + 1:
        print('Y')
    else:
        print('N')
