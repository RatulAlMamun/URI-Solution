T = int(input())
for _ in range(T):
    N = int(input())
    names = list(map(str, input().split(' ')))
    attendence = list(map(str, input().split()))
    result = []
    for idx, x in enumerate(attendence):
        P = x.count('P')
        A = x.count('A')
        percentage = int((P/(P+A))*100)
        if percentage < 75:
            result.append(names[idx])
    print(' '.join(result))
