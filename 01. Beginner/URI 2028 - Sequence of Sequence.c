#include <stdio.h>
int main()
{
    int N, i = 1, j, k;
    while(scanf("%d",&N) != EOF) {
        if(N == 0) {
            printf("Caso %d: 1 numero\n", i);
        } else {
            printf("Caso %d: %d numeros\n", i, ((N * (N + 1)) / 2) + 1);
        }
        i++;
        printf("0");
        for(j = 1; j <= N; j++) {
            for(k = 1; k <= j; k++) {
                printf(" %d", j);
            }
        }
        printf("\n\n");
    }
    return 0;
}
