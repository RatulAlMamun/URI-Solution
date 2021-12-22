def oracleOfAlexandria(N, K):
    total = N
    i = 1
    while N - (i * K) >= 1:
        total *= N - (i * K)
        i += 1
    return total

def textNumSplitter(item):
    for index, letter in enumerate(item, 0):
        if not letter.isdigit():
            return [item[:index],item[index:]]

T = int(input())
for _ in range(T):
    NK = input()
    N, K = textNumSplitter(NK)
    print(oracleOfAlexandria(int(N), len(K)))