while True:
    try:
        N = int(input())
        numbers = list(map(int, input().split()))
        numbers.sort()
        differ = [numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1)]
        print(N // 2, differ[len(differ) // 2])
    except EOFError:
        break