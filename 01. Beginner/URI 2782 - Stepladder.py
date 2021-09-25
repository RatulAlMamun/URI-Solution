N = int(input())
sequence = list(map(int, input().split()))
if N == 1 or N == 2:
	print(1)
else:
    result = 1
    difference = sequence[0] - sequence[1]
    for i in range(2, N):
        diff = sequence[i - 1] - sequence[i];
        if diff != difference:
            difference = diff
            result = result + 1
    print(result)