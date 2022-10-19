while(True):
    try:
        data = input()
        numbers = [i for i in (''.join((ch if ch in '0123456789-' else ' ') for ch in data)).split()]
        if ('R' in data or 'L' in data):
            result = int(numbers[1]) - int(numbers[0])
        else:
            result = int(numbers[0]) + int(numbers[1])
        print(result)
    except EOFError:
        break

        