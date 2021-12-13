while True:
    N = int(input())
    if N == 0:
        break
    timeList = list(map(int, input().split()))
    totalActiveTime = 0
    for i in range(N - 1):
        timedifference = timeList[i + 1] - timeList[i]
        if timedifference <= 10:
            totalActiveTime = totalActiveTime + timedifference
        else:
            totalActiveTime = totalActiveTime + 10
    print(totalActiveTime + 10)