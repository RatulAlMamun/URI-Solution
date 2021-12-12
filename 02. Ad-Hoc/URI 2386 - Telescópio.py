A = int(input())
N = int(input())
count = 0
for _ in range(N):
	F = int(input())
	if F * A >= 40000000:
		count = count + 1
print(count)