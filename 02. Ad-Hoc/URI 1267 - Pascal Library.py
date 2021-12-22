while True:
    N, D = map(int, input().split())
    if N == 0 and D == 0:
        break
    attendanceFlag = [True] * N
    for _ in range(D):
        dinnerAttendance = list(map(int, input().split()))
        for i in range(N):
            if (dinnerAttendance[i] == 0) and attendanceFlag[i]:
                attendanceFlag[i] = False
    if any(attendanceFlag):
        print("yes")
    else:
        print("no")