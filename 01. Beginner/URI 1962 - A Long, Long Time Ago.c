#include <stdio.h>

int main()
{
    long long int N, i, T;
    scanf("%lld", &N);
    for(i = 0; i < N; i++) {
        scanf("%lld", &T);
        if(T < 2015) {
            printf("%lld D.C.\n", 2015 - T);
        } else {
            printf("%lld A.C.\n", T - 2014);
        }
    }
    return 0;
}