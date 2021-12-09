while True:
	numberOfStone = int(input())
	if numberOfStone == 0:
		break
	attemp = 0
	while True:
		li = list(map(int, input().split()))
		attemp = attemp + 1
		if sorted(li) == li:
			print(attemp)
			break