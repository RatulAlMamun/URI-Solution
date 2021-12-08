n = int(input())
m = int(input())
s = set()
for i in range(m):
	a = input()
	s.add(a)
print(n - len(s))