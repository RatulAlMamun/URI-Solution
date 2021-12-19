while(True):
    try:
        T = int(input())
        minimum = 20
        for _ in range(T):
            s = float(input())
            if minimum > s:
                minimum = s
        print(minimum)
    except EOFError:
        break