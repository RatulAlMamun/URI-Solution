n = list(map(int, input().split()))
increased = False
decreased = False
for i in range(1, len(n), 1):
	if n[i - 1] < n[i]:
		increased = True
	elif n[i - 1] > n[i]:
		decreased = True
if increased and decreased:
	print("N")
elif decreased:
	print("D")
else:
	print("C")