N = int(input())
for _ in range(N):
    opt = input()
    plus = opt.count('+')
    if plus == 0:
        print('skipped')
    else:
        data = list(map(int, opt.split('+')))
        print(sum(data))
