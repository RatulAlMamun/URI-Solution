import math
while True:
    try:
        N = int(input())
        flag = False
        if N < 0:
            flag = False
        else:
            number = int(math.sqrt(N))
            i = 0
            while i <= number:
                sumOfTwo = i ** 2 + number ** 2
                if sumOfTwo == N:
                    flag = True
                    break
                elif sumOfTwo < N:
                    i = i + 1
                else:
                    number = number - 1
        if flag:
            print("YES")
        else:
            print("NO")
    except EOFError:
        break