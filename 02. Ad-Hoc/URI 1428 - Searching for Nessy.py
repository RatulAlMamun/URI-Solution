t = int(input())
for i in range(t):
	n, m = map(int, input().split())
	rows = n // 3
	cols = m // 3
	print(rows * cols)