while True:
    A, B = map(int, input().split())
    if not(A) and not(B):
        break
    aliceCards = map(int, input().split())
    bettyCards = map(int, input().split())
    aliceFlag = [0] * 100001
    bettyFlag = [0] * 100001
    aliceCount = 0
    bettyCount = 0
    for i in aliceCards:
        aliceFlag[i] += 1
    for i in bettyCards:
        bettyFlag[i] += 1
    
    for i in range(100001):
        if aliceFlag[i] != 0 and bettyFlag[i] == 0:
            aliceCount += 1
        if aliceFlag[i] == 0 and bettyFlag[i] != 0:
            bettyCount += 1
    
    if aliceCount < bettyCount:
        print(aliceCount)
    else:
        print(bettyCount)