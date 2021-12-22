N, M = map(int, input().split())
count = 0
for _ in range(N):
    goals = map(int, input().split())
    if all(goals):
        count += 1
print(count)