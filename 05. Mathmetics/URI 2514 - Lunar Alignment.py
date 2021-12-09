def gcd(a, b):  
	if a == 0 : 
		return b  
	return gcd(b % a, a)
def lcm(x, y):
	return x * y // gcd(x, y)
try:
	while True:
		m = int(input())
		a, b, c = map(int, input().split())
		print(lcm(lcm(a, b), c) - m)
except EOFError:
	pass