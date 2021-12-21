while True:
    try:
        N = int(input())
        if N == 2:
            print(" *")
            print(" *")
            print("***")
        if N % 2 == 0:
            N = N - 1
        if N > 2:
            N = N // 2 + 1
            for i in range(N):
                for j in range(N-i-1):
                    print(" ", end="")
                for j in range(2 * i + 1):
                    print("*", end="")
                print()
            for i in range(2):
                for j in range(N-i-1):
                    print(" ", end="")
                for j in range(2 * i + 1):
                    print("*", end="")
                print()
        print()
    except EOFError:
        break