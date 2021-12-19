while True:
    try:
        N = int(input())
        for _ in range(N):
            code = input()
            separation_code = code.split()
            separation = len(separation_code)
            string_len = len(separation_code[0])
            print(chr((97 + 3 * (separation - 1)) + string_len - 1))
    except EOFError:
        break