# C is the minimum possible integer so C < A < B
# so, median will be A
# Since,
# Mean = Median
#   (A + B + C)/3 = A
# => A + B + C = 3A
# => C = 3A - A - B
# => C = 2A - B

 
while True:
	A, B = map(int, input().split())
	if A == B == 0:
		break
	C = 2 * A - B
	print(C)