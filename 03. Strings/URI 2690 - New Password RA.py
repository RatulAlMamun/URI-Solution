testcase = int(input())
passcode = ['GQaku', 'ISblv', 'EOYcmw', 'FPZdnx', 'JTeoy', 'DNXfpz', 'AKUgq', 'CMWhr', 'BLVis', 'HRjt']
for i in range(testcase):
	password = input()
	password = password.replace(" ", "")
	password = password[:12]
	for char in password:
		for j in range(10):
			if char in passcode[j]:
				print(j, end='')
	print('')