from math import sqrt
def isPrime(n):
    prime_flag = 0
    if n > 1:
        for i in range(2, int(sqrt(n)) + 1):
            if n % i == 0:
                prime_flag = 1
                break
        if prime_flag == 0:
            return True
        else:
            return False
    else:
        return False;
        
        
while True:
    try:
        numberOfCoin = int(input())
        coinValue = []
        for i in range(numberOfCoin):
            coinValue.append(int(input()))
        jump = int(input())
        
        valueSum = 0
        i = numberOfCoin - 1
        while i >= 0:
            valueSum += coinValue[i]
            i -= jump
            
        if isPrime(valueSum):
            print("You’re a coastal aircraft, Robbie, a large silver aircraft.")
        else:
            print("Bad boy! I’ll hit you.")
    except EOFError:
        break