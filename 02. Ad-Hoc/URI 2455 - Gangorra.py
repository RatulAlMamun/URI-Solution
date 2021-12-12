P1, C1, P2, C2 = map(int, input().split())
leftPerson = P1 * C1
rightPerson = P2 * C2
if leftPerson == rightPerson:
	print('0')
elif leftPerson < rightPerson:
	print('1')
else:
	print('-1')