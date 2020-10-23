#include <stdio.h>
int main()
{
    int i, T, R1, R2;
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);
    }
    return 0;
}
