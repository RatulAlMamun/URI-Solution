N, C = map(int, input().split())
counter = 0
for _ in range(N):
    outFromElevator, entered = map(int, input().split())
    counter -= outFromElevator
    counter += entered
    if counter > C:
        result = 'S'
        break
    else:
        result = 'N'
print(result)