position = input()
if (ord(position[0]) + 2 == ord(position[3])) or (ord(position[0])- 2 == ord(position[3])):
	if (int(position[1]) + 1 == int(position[4])) or (int(position[1]) - 1 == int(position[4])):
		print("VALIDO")
	else:
		print("INVALIDO")
elif (int(position[1]) + 2 == int(position[4])) or (int(position[1]) - 2 == int(position[4])):
	if (ord(position[0]) + 1 == ord(position[3])) or (ord(position[0])- 1 == ord(position[3])):
		print("VALIDO")
	else:
		print("INVALIDO")
else:
	print("INVALIDO")