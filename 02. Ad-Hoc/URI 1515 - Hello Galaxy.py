while True:
    N = int(input())
    if N == 0:
        break
    firstmessageyear = 10000000
    result = 0
    for _ in range(N):
        planet, receiveyear, duration = map(str, input().split())
        receiveyear = int(receiveyear)
        duration = int(duration)
        temp = receiveyear - duration
        if firstmessageyear > temp:
            firstmessageyear = temp
            result = planet
    print(result)