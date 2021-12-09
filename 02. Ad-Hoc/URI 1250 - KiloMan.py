N = int(input())
for _ in range(N):
	hitCount = 0
	S = int(input())
	height = list(map(int, input().split()))
	jump = input()
	for i in range(S):
		if (jump[i] == 'S' and height[i] < 3) or (jump[i] == 'J' and height[i] > 2):
			hitCount = hitCount + 1
	print(hitCount)