N = int(input())
distance = 0
for _ in range(N):
	T, V = map(int, input().split())
	distance = distance + (T * V)
print(distance)