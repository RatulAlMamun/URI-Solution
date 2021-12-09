while True:
	num1, num2 = map(int, input().split())
	if num1 == 0 and num2 == 0:
		break
	carry = 0;
	total_carry = 0;
	while True:
		a = num1 % 10
		b = num2 % 10
		num1 = num1 // 10
		num2 = num2 // 10
		if a + b + carry >= 10:
			total_carry = total_carry + 1
			carry = 1
		else:
			carry = 0
		if num1 == 0 and num2 == 0:
			break
	if total_carry == 0:
		print("No carry operation.")
	elif total_carry == 1:
		print("1 carry operation.")
	else:
		print(total_carry, "carry operations.")