import sys

for line in sys.stdin:
    S = line.strip()
    length = len(S)
    if length > 3:
        print("Essa coluna nao existe Tobias!")
    elif length == 1:
        print(ord(S[0]) - 64)
    elif length == 2:
        print((26 * (ord(S[0]) - 64)) + (ord(S[1]) - 64))
    else:
        result = (676 * (ord(S[0]) - 64)) + (26 * (ord(S[1]) - 64)) + (ord(S[2]) - 64)
        if result > 16384:
            print("Essa coluna nao existe Tobias!")
        else:
            print(result)