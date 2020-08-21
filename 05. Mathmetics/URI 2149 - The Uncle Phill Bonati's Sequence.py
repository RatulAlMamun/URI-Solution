'''
The List is created by following Rules:
-----------------------------------------
first number of sequence = 0
second number of sequence = 1
third number of sequence = first + second
fourth number of sequence = second * third
f(n) =  if n < 3 then f(n) = n-1
        if n=odd then f(n) = f(n-1)+f(n-2),
        if n =even then f(n) = f(n-1) * f(n-2)
'''
sequence = [0, 1, 1, 1, 2, 2, 4, 8, 12, 96, 108, 10368, 10476, 108615168, 108625644, 11798392572168192, 11798392680793836]
while True:
    try:
        N = int(input())
        print(sequence[N-1])
    except EOFError:
        break
        
        
