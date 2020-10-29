#include <stdio.h>
int main()
{
    int N, T, i, p, low = 21;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        scanf("%d", &T);
        if (T < low) {
            low = T;
            p = i;
        }
    }
    printf("%d\n", p);
    return 0;
}
