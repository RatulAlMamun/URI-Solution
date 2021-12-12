N, K = map(int, input().split())
stduents = []
for _ in range(N):
	name = input()
	stduents.append(name)
stduents.sort()
print(stduents[K - 1])