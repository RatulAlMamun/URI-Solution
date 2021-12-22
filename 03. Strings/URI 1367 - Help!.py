while True:
    N = int(input())
    if N == 0:
        break
    score = dict([(chr(i), 0) for i in range(65, 91)])
    totalScore = 0
    correctScore = 0
    for i in range(N):
        judgement = input().split()
        if(judgement[2] == 'correct'):
            score[judgement[0]] += int(judgement[1])
            totalScore += score[judgement[0]]
            correctScore += 1
        else:
            score[judgement[0]] += 20
    print(correctScore, totalScore)