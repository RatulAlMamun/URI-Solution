N = int(input())
balls = list(map(int, input().split()))
while len(balls) > 1:
    balls = [1 if balls[i] == balls[i + 1] else -1 for i in range(len(balls) - 1)]
if balls[0] == -1:
    print("branca")
else:
    print("preta")