while True:
	n = int(input())
	li = [1,2]
	if n == 0:
		break
	if n < 3:
		print(n)
	else:
		for i in range(2, n, 1):
			li.append(li[i - 1] + li[i - 2])
		print(li[n - 1])