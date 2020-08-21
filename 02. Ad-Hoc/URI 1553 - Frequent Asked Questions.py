while True:
    N, K = map(int, input().split())
    if N == 0 and K == 0:
        break
    question = list(map(int, input().split()))
    question_set = set(question)
    result = []
    count = 0
    for i in question_set:
        result.append(question.count(i))
    for i in result:
        if i >= K:
            count = count + 1
    print(count)
    