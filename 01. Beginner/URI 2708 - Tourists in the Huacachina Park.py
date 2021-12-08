Car = 0
Passenger = 0
while(True):
	value = input()
	input_list = value.split()
	a = input_list[0]
	if len(input_list) > 1:
		b = int(input_list[1])
	if a == "SALIDA":
		Passenger = Passenger + b
		Car = Car + 1
	elif a == "VUELTA":
		Car = Car - 1
		Passenger = Passenger - b
	else:
		break

print(Passenger)
print(Car)