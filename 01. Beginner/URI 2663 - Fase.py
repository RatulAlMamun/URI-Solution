N = int(input())
K = int(input())
score = []
for _ in range(N):
    s = int(input())
    score.append(s)
score.sort(reverse=True)
while(N > K):
    if(score[K - 1] == score[K]):
        K = K + 1
    else:
        break
print(K)