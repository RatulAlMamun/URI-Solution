t = int(input())

for i in range(t):
	msg = input()
	li = msg.split(' ')
	li = [x for x in li if x != '']
	li = [n[0] for n in li]
	li = ''.join(li)
	print(li)