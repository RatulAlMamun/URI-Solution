try:
	while True:
		N, R = map(int, input().split())
		returnedVolunteers = list(map(int, input().split()))
		if N == R:
			print("*")
		else:
			flag = [True]*N
			for i in returnedVolunteers:
				flag[i - 1] = False
			res = [i+1 for i, val in enumerate(flag) if val] 
			print(*res, sep=" ", end=" ")
			print()
except EOFError:
	pass