while True:
	t = int(input())
	if t == 0:
		break
	li = list(map(int, input().split()))  
	res = max(n for n in li if n != max(li))
	print(li.index(res) + 1)