def fibonot(n):
    first = 1
    second = 2
    current = 3
    while n > 0: 
        first = second                  
        second = current                
        current = first + second           
        n = n - (current - second - 1)       
    n = n + (current - second - 1)           
    return second + n   

K = int(input())
print(fibonot(K))