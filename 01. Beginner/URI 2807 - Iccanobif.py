n = int(input())
li = [1, 1]
for i in range(n - 2):
	li.insert(0, li[0] + li[1])
if n == 1:
	print(1)
else:
	print(*li)