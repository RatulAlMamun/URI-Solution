while True:
    try:
        N, M = map(int, input().split())
        counter = 0
        for number in range(N, M + 1):
            n = str(number)
            if len(set(n)) == len(n):
                counter += 1
        print(counter)
    except:
        break