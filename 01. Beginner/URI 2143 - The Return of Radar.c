#include <stdio.h>
int main()
{
    int i, T, N;
    while(1) {
        scanf("%d", &T);
        if(T == 0) break;
        for(i = 0; i < T; i++) {
            scanf("%d", &N);
            if(N % 2 == 0) {
                printf("%d\n", N * 2 - 2);
            } else {
                printf("%d\n", N * 2 - 1);
            }
        }
    }
    return 0;
}
