N, K = map(int, input().split())
heights = list(map(int, input().split()))
peaks = 0
valleys = 0
for i in range(1, len(heights) - 1):
    if heights[i] > heights[i - 1] and heights[i] > heights[i + 1]:
        peaks = peaks + 1
    if heights[i] < heights[i - 1] and heights[i] < heights[i + 1]:
        valleys = valleys + 1
if peaks == K and valleys == K - 1:
    print("beautiful")
else:
    print("ugly")