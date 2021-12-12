while True:
	a, b, c = map(int, input().split())
	if a == b == c == 0:
		break
	parallelepipeds_area = a * b * c
	side = parallelepipeds_area ** (1 / 3)
	print(int(side))