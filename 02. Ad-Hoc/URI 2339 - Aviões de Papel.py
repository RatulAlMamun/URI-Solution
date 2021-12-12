C, P, F = map(int, input().split())
eachCompetitorsHave = P // C
if eachCompetitorsHave >= F:
	print('S')
else:
	print('N')