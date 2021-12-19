while True:
    try:
        C, N = map(int, input().split())
        cipher  = input().lower()
        decipher = input().lower()
        for _ in range(N):
            a = input()
            for i in a:
                if i.isupper():
                    upper = True
                    i = i.lower()
                else:
                    upper = False
                if i in cipher:
                    index = cipher.index(i)
                    if upper:
                        print(decipher[index].upper(), end="")
                    else:
                        print(decipher[index], end="")
                elif i in decipher:
                    index = decipher.index(i)
                    if upper:
                        print(cipher[index].upper(), end="")
                    else:
                        print(cipher[index], end="")
                else:
                    if upper:
                        print(i.upper(), end="")
                    else:
                        print(i, end="")
            print()
        print()
    except EOFError:
        break