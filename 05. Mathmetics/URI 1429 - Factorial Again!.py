import math
while True:
	ACM = input()
	if int(ACM) == 0:
		break
	decimal = 0
	factorialCount = 1
	for number in reversed(ACM):
		decimal = decimal + int(number) * math.factorial(factorialCount)
		factorialCount = factorialCount + 1
	print(decimal)