while True:
	n = int(input())
	if n == 0:
		break
	else:
		result = (11 * n * n + n * n * n * n) // 12
	print(result % 1000007)