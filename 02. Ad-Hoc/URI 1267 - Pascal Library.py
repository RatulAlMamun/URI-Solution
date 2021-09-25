while True:
    N, D = map(int, input().split())
    if N == 0 and D == 0:
        break
    attendenceFlag = [True] * N
    for _ in range(D):
        dinnerAttendence = list(map(int, input().split()))
        for i in range(N):
            if (dinnerAttendence[i] == 0) and attendenceFlag[i]:
                attendenceFlag[i] = False
    if any(attendenceFlag):
        print("yes")
    else:
        print("no")