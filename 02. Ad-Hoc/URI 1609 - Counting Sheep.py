T = int(input())
for _ in range(T):
    N = int(input())
    numbers = set(map(int, input().split()))
    print(len(numbers))