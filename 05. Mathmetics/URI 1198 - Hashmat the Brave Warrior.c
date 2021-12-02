#include <stdio.h>
#include <stdlib.h>

long long int solve(long long int a, long long int b)
{
    if(a == b) return 0;
    if(a < b) return b - a;
    if(b < a) return a - b;
}

int main()
{
    long long int a, b;
    while(scanf("%lld%lld", &a, &b) != EOF) {
        printf("%lld\n", solve(a, b));
    }
    return 0;
}
