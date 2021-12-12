N = int(input())
for _ in range(N):
	L = int(input())
	step = 0
	li = list(map(int, input().split()))
	while li:
		min_index = li.index(min(li))
		step = step + min_index
		li.pop(min_index)
	print("Optimal train swapping takes %d swaps." % step)