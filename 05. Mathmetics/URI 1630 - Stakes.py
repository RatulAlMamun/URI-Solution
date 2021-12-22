def perimeter(width, length):
    return 2 * (width + length)

def gcd(a, b):
    if(b == 0):
        return a
    else:
        return gcd(b, a % b)

while(True):
    try:
        X, Y = map(int, input().split())
        print(perimeter(X, Y) // gcd(X, Y))
    except EOFError:
        break