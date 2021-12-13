while(True):
    N = int(input())
    if N == 0:
        break
    peak = 0
    H = list(map(int, input().split()))
    length = len(H)
    if N == 2:
        if H[0] != H[1]:
            peak = 2
    else:
        for i in range(1, length - 1):
            if (H[i] > H[i - 1] and H[i] > H[i + 1]) or (H[i] < H[i - 1] and H[i] < H[i + 1]):
                peak += 1
        if (H[0] > H[1] and H[0] > H[length - 1]) or (H[0] < H[1] and H[0] < H[length - 1]):
            peak += 1
        if (H[length - 1] > H[0] and H[length - 1] > H[length-2]) or (H[length - 1] < H[0] and H[length - 1] < H[length - 2]):
            peak += 1
    print(peak)