while True:
	N = int(input())
	if N == 0:
		break
	for _ in range(N):
		a, b, c, d, e = map(int, input().split())
		count = 0
		if a < 128:
			count = count + 1
			result = "A"
		if b < 128:
			count = count + 1
			result = "B"
		if c < 128:
			count = count + 1
			result = "C"
		if d < 128:
			count = count + 1
			result = "D"
		if e < 128:
			count = count + 1
			result = "E"
		if count == 1:
			print(result)
		else:
			print("*")