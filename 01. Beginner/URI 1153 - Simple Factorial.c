#include <stdio.h>
int main()
{
    int i, N, f = 1;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        f *= i;
    }
    printf("%d\n", f);
    return 0;
}
