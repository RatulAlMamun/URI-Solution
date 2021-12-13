bet = list(map(int, input().split()))
draw = list(map(int, input().split()))
count = 0
for i in range(6):
	if bet[i] in draw:
		count = count + 1
if count == 3:
	print("terno")
elif count == 4:
	print("quadra")
elif count == 5:
	print("quina")
elif count == 6:
	print("sena")
else:
	print("azar")