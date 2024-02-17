while True:
    try:
        n = int(input())
        startGrid = list(map(int, input().split()))
        finishGrid = list(map(int, input().split()))
        overtakes = 0
        
        for i in range(n):
            for j in range(i + 1, n):
                if startGrid.index(finishGrid[i]) > startGrid.index(finishGrid[j]):
                    overtakes += 1
        print(overtakes)
    except EOFError:
        break