N = int(input())
car = 0
doll = 0
while N:
    name, gender = map(str, input().split())
    if gender == 'M':
        car = car + 1
    else:
        doll = doll + 1
    N = N - 1
print(car, 'carrinhos')
print(doll, 'bonecas')