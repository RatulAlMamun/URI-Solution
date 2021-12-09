try:
	while True:
		text = input()
		count_list = []
		odd = 0
		for i in "abcdefghijklmnopqrstuvwxyz":
			count_list.append(text.count(i))
		for i in count_list:
			if i % 2 == 1:
				odd = odd + 1
		if odd <= 1:
			print(0)
		else:
			print(odd-1)
except EOFError:
	pass