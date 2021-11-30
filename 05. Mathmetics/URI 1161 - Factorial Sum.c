#include <stdio.h>

long long int fact(int n)
{
    int i;
    long long int sum = 1;
    for(i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main()
{
    int M, N;
    while(scanf("%d%d", &M, &N) != EOF) {
        printf("%lld\n", fact(M) + fact(N));
    }
    return 0;
}
