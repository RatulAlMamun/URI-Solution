N, M = map(int, input().split())
totalTime = []
for _ in range(N):
    lap = map(int, input().split())
    totalTime.append(sum(lap))
maximum = max(totalTime) + 1
first = totalTime.index(min(totalTime)) + 1
totalTime[totalTime.index(min(totalTime))] = maximum
second = totalTime.index(min(totalTime)) + 1
totalTime[totalTime.index(min(totalTime))] = maximum
third = totalTime.index(min(totalTime)) + 1
totalTime[totalTime.index(min(totalTime))] = maximum
print(first)
print(second)
print(third)