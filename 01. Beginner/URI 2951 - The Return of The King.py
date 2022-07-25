N, G = map(int, input().split())
letter = []
value = []
for _ in range(N):
    l, v = map(str, input().split())
    letter.append(l)
    value.append(int(v))
X = int(input())
runes = list(map(str, input().split()))
result = 0
for i in runes:
    try:
        index = letter.index(i)
        result = result + value[index]
    except ValueError:
        continue
print(result)
if result >= G:
    print("You shall pass!")
else:
    print("My precioooous")