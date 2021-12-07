while True:
	t = int(input())
	if t == 0:
		break
	originX, originY = input().split(' ')
	originX, originY = int(originX), int(originY)
	for _ in range(t):
		X, Y = input().split(' ')
		X, Y = int(X), int(Y)
		X, Y = X - originX, Y - originY
		if X == 0 or Y == 0:
			print("divisa")
		elif X > 0 and Y > 0:
			print("NE")
		elif X < 0 and Y > 0:
			print("NO")
		elif X < 0 and Y < 0:
			print("SO")
		elif X > 0 and Y < 0:
			print("SE")