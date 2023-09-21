test = 1
while True:
    N = int(input())
    if N == 0:
        break
    print("Teste {0}".format(test))
    test += 1
    totalJ = 0
    totalZ = 0
    for _ in range(N):
        J, Z = map(int, input().split())
        totalJ += J
        totalZ += Z
        print(totalJ - totalZ)
    print()
