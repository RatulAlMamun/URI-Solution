try:
	while True:
		string = list(input())
		star = True
		underscore = True
		for i in string:
			if star == True and i == '*':
				index = string.index('*')
				string[index] = '<b>'
				star = False
			elif star == False and i == '*':
				index = string.index('*')
				string[index] = '</b>'
				star = True
			elif underscore == True and i == '_':
				index = string.index('_')
				string[index] = '<i>'
				underscore = False
			elif underscore == False and i == '_':
				index = string.index('_')
				string[index] = '</i>'
				underscore = True
		print(''.join(string))
except EOFError:
    pass