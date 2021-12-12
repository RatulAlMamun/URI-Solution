while True:
	number = input()
	if number[0] == '-':
		break
	if number.isdigit():
		result = hex(int(number))
		result = result[:2] + result[2:].upper()
	else:
		result = int(number, 16)
	print(result)