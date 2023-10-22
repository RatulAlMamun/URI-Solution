def nextprime(n):
	prime=0
	n += 1
	for i in range(2, int(n ** 0.5) + 2):
		if n % i == 0:
			prime = 0
			break
		else:
			prime = 1
	if prime == 1:
		return n
	else:
		return nextprime(n)

weight = int(input())
n = weight - 1
speed = 0
for _ in range(10):
    n = nextprime(n)
    speed += n
hour = 60000000 // speed
day = hour // 24
print(speed, 'km/h')
print(hour, 'h /', day, 'd')
