'''
This is an quadratic Equation. which is called
second difference quadratic Equation.
Because the difference between 2 terms are 1 in second difference.

So, the formula of quadratic Equation is a*n*n + b*n + c

In this case a = 1/2, b = 1/2, c = 1

'''

N = int(input())
for _ in range(N):
    n = int(input())
    result = ((n * (n + 1)) / 2) + 1
    print(int(result))
