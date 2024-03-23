import math

def isPrime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
    
while True:
    try:
        N = int(input())
        if isPrime(N):
            strN = str(N)
            count = 0
            for num in strN:
                if (num == '2' or num == '3' or num == '5' or num == '7'):
                    count = count + 1
            if count == len(strN):
                print('Super')
            else:
                print('Primo')
        else:
            print('Nada')
    except EOFError:
        break