N = int(input())
for _ in range(N):
    C, D = map(int, input().split())
    if C == 0 and D == 0:
        print(0)
    else:
        print(pow(26, C) * pow(10, D))