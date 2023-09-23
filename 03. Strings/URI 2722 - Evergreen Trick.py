N = int(input())
for _ in range(N):
    name = ""
    A = input()
    B = input()
    ALen = len(A)
    for i in range(0, ALen, 2):
        name += A[i:i+2]
        name += B[i:i+2]
    print(name)
