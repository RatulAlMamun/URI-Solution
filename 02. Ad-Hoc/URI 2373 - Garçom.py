N = int(input())
brokenCup = 0
for _ in range(N):
	L, C = map(int, input().split())
	if L > C:
		brokenCup = brokenCup + C
print(brokenCup)