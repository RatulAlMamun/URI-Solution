line = int(input())
jump = 0
flag = True
justInput = True
count = 0
for i in range(line):
	iceType = input()
	if iceType[0] == '.':
		if flag and justInput:
			jump = jump + 1
		flag = False
		count = count + 1
		if count == 3:
			jump = -1
			justInput = False	
	else:
		flag = True
		count = 0
if jump < 0:
	print("N")
else:
	print(jump)

