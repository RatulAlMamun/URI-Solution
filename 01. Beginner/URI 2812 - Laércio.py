N = int(input())
for _ in range(N):
    M = int(input())
    nums = list(map(int, input().split()))
    nums.sort()
    oddNums = [x for x in nums if x % 2 == 1]
    numLen = len(oddNums)
    half_len = numLen // 2
    result = []
    for i in range(half_len):
        result.append(oddNums[numLen - i - 1])
        result.append(oddNums[i])
    if numLen % 2:
        result.append(oddNums[half_len])
    print(*result, sep=" ")