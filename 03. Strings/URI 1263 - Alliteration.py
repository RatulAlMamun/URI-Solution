try:
	while True:
		string = list(input().lower().split())
		string_word = list()
		for s in string:
			string_word.append(s[0][0])

		alliteration = 0
		stat_one = True
		stat_two = False

		for s in string_word:
			if stat_one:
				letter 		= s
				stat_two 	= True
				stat_one 	= False
			elif stat_two and letter == s:
				alliteration = alliteration + 1
				stat_two 	= False
			elif letter != s:
				letter		= s
				stat_two	= True
			else:
				stat_one	= True
				stat_two	= False

		print(alliteration)

except EOFError:
    pass