#include <stdio.h>

int count;

int fib(int n)
{
    count++;
    if(n == 1) return 1;
    if(n == 0) return 0;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, f;
    scanf("%d", &n);
    while(n--) {
        count = 0;
        scanf("%d", &f);
        printf("fib(%d) = %d calls = %d\n", f, count - 1, fib(f));
    }
    return 0;
}