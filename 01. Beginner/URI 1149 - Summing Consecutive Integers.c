#include <stdio.h>
int main()
{
    int A, N, i, sum = 0;
    scanf("%d %d", &A, &N);
    while(N <= 0) {
        scanf("%d", &N);
    }
    for(i = 0; i < N; i++) {
        sum += i + A;
    }
    printf("%d\n", sum);
    return 0;
}
