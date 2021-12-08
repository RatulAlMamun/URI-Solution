numberofgame = int(input())
win = 0
for i in range(numberofgame):
	cardoor = int(input())
	if cardoor == 2 or cardoor == 3:
		win = win + 1
print(win)