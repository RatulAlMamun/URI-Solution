index = 1
while True:
    try:
        N = input()
        shoes = list(map(str, input().split()))
        if index > 1:
            print()
        f = m = 0
        match = False
        for shoe in shoes:
            if match and shoe == 'F':
                f = f + 1 
            elif match and shoe == 'M':
                m = m + 1
            match = (shoe == N)
        print('Caso {0}:'.format(index))
        print('Pares Iguais: {0}'.format(f + m))
        print('F: {0}'.format(f))
        print('M: {0}'.format(m))
        index = index + 1
    except EOFError:
        break
