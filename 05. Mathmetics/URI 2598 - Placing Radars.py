import math
testcase = int(input())
for i in range(testcase):
	m, n = map(int, input().split())
	print(int(math.ceil(m / n)))