testcase = int(input());
for _ in range(testcase):
	password = input()
	password= list(password)
	generated_password = []
	if len(password) == 20 and password[:2] == ['R', 'A']:
		password = list(password[2:])
		active = False
		for i in password:
			if i != '0' or active:
				active = True
				generated_password.append(i)
		password = ''.join(generated_password)
		print(password)
	else:
		print('INVALID DATA')