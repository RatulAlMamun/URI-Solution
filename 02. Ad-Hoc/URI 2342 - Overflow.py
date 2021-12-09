maximum_range = int(input())
expression = input()
expression = expression.split()
num1 = int(expression[0])
num2 = int(expression[2])
if expression[1] == '+':
	result = num1 + num2
else:
	result = num1 * num2
if result > maximum_range:
	print("OVERFLOW")
else:
	print("OK")