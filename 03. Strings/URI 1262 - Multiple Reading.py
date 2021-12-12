try:
	while True:
		rwcommandList = input()
		rgroup = int(input())
		cycle = 0
		rcount = 0
		length = len(rwcommandList)
		for i in range(length):
			if rwcommandList[i] == 'W':
				cycle = cycle + 1
			else:
				rcount = rcount + 1
				if i+1 < length:
					if rwcommandList[i+1] == 'W':
						cycle = cycle + 1
						rcount = 0
				if rcount == rgroup or i == length - 1:
					rcount = 0
					cycle = cycle + 1
		print(cycle)
except EOFError:
	pass