N, M = map(int, input().split())
fruits = []
data = []
for _ in range(N):
    fruits.append(input())
for _ in range(M):
    data.append(input())
for fruit in fruits:
    fruit = fruit.lower()
    notFound = True
    for d in data:
        d = d.lower()
        if d.find(fruit) > -1:
            print('Sheldon come a fruta', fruit)
            notFound = False
            break
        elif d[::-1].find(fruit) > -1:
            print('Sheldon come a fruta', fruit)
            notFound = False
            break
    if notFound:
        print('Sheldon detesta a fruta', fruit)