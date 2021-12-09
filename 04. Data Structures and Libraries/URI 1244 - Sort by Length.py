N = int(input())
for i in range(N):
	string = input()
	words = string.split()
	words = sorted(words, key=len, reverse=True)
	print(' '.join(words))