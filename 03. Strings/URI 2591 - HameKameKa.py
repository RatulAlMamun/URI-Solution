C = int(input())
for _ in range(C):
	sloke = input()
	H = 0
	K = 0
	i = 1
	j = len(sloke) - 3
	Hbr = False
	Kbr = False
	while(True):
		if Hbr and Kbr:
			break
		if sloke[i] == 'a':
			H = H + 1
			i = i + 1
		else:
			Hbr = True
		if sloke[j] == 'a':
			K = K + 1
			j = j - 1
		else:
			Kbr = True
	A = H * K
	print('k' + 'a' * A)