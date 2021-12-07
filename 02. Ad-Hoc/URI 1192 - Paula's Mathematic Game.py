t = int(input())

for i in range(t):
	number = input()
	first = int(number[0])
	last = int(number[2])
	middle = number[1]
	if first == last:
		print(first * last)
	elif middle.isupper():
		print(last - first)
	elif middle.islower():
		print(last + first)