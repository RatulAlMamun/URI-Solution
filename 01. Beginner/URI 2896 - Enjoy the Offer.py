T = int(input())
for _ in range(T):
	N, K = map(int, input().split()) 
	R = N // K + N % K
	print(R)