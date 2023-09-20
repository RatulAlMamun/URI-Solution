while True:
    T = int(input())
    if T == 0:
        break
    for i in range(T):
        Q, A, B = map(float, input().split())
        print('Size #{0}:'.format(i + 1))
        print("Ice Cream Used: {:.2f} cm2".format(((A + B) / 2) * 5 * Q))
    print()
