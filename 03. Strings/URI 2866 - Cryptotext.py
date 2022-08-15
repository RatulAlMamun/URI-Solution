N = int(input())
for _ in range(N):
    CryptoText = input()
    print(''.join([c for c in CryptoText if c.islower()])[::-1])