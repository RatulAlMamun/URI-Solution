words = []
N = int(input())
for _ in range(N):
    words.append(input())
Q = int(input())
for _ in range(Q):
    search = input()
    finding = list(word for word in words if word.find(search) == 0)
    l = len(finding)
    if l:
        print(l, len(max(finding, key=len)))
    else:
        print(-1)