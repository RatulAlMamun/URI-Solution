N, S = map(int, input().split())
low_balance = S
for _ in range(N):
	amount = int(input())
	S = S + amount
	if S < low_balance:
		low_balance = S
print(low_balance)