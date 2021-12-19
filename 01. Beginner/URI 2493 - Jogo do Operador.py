while True:
    try:
        X = []
        Y = []
        Z = []
        name = []
        N = int(input())
        for _ in range(N):
            expression = input().split()
            X.append(int(expression[0]))
            exp = expression[1].split("=")
            Y.append(int(exp[0]))
            Z.append(int(exp[1]))
        for _ in range(N):
            answer = input().split()
            index = int(answer[1]) - 1
            if answer[2] == '+' and not (X[index] + Y[index] == Z[index]):
                name.append(answer[0])
            elif answer[2] == '-' and not (X[index] - Y[index] == Z[index]):
                name.append(answer[0])
            elif answer[2] == '*' and not (X[index] * Y[index] == Z[index]):
                name.append(answer[0])
            elif answer[2] == 'I' and ((X[index] + Y[index] == Z[index]) or (X[index] - Y[index] == Z[index]) or (X[index] * Y[index] == Z[index])):
                name.append(answer[0])
        if len(name) == 0:
            print("You Shall All Pass!")
        elif len(name) == N:
            print("None Shall Pass!")
        else:
            print(*sorted(name))
    except EOFError:
        break