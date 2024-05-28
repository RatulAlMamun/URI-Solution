try:
    while True:
        N = input()
        sequence = list(map(int, input().split()))
        minDiff = float('inf')
        rangelSum = 0
        totalAssignment = sum(sequence)
        for num in sequence:
            rangelSum = rangelSum + num
            guguSum = totalAssignment - rangelSum
            difference = abs(rangelSum - guguSum)
            if minDiff > difference:
                minDiff = difference
        print(minDiff)
except EOFError:
    pass
