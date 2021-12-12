N = int(input())
a, b, c = map(int, input().split())
if a >= N and b >= N and c >= N:
	print('S')
else:
	print('N')