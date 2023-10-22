import math
test = 1
while True:
    try:
        inputData = input()
        if inputData == '0':
            break
        R, W, L = map(int, inputData.split())
        diameter = 2 * R
        diagonal = math.ceil(math.sqrt(W * W + L * L))
        print('Pizza', test, ('does not fit', 'fits')[diameter >= diagonal], 'on the table.')
        test += 1
    except EOFError:
        break