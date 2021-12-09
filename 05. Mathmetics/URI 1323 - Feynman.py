while True:
	N = int(input())
	if N == 0:
		break
	result = (2 * N * N * N + 3 * N * N + N) // 6
	print(result)