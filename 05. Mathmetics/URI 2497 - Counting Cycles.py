count = 0
while True:
    N = int(input())
    count += 1
    if N == -1:
        break
    else:
        print("Experiment " + str(count) + ": " + str(N//2) + " full cycle(s)")