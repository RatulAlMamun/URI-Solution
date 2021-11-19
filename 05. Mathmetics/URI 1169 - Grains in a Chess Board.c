#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, square;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &square);
        printf("%llu kg\n", (unsigned long long)(pow(2, square) / 12) / 1000);
    }
    return 0;
}
