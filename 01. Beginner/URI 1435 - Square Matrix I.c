#include <stdio.h>
int main()
{
    int N, i, j, m = 0;
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        for(i = 1; i <= N; i++) {
            for(j = 1; j <= N; j++) {
                m = i;
                if(j < m) {
                    m = j;
                }
                if(N - i + 1 < m) {
                    m = N - i + 1;
                }
                if(N - j + 1 < m) {
                    m = N - j + 1;
                }
                printf("%3d", m);
                if(j < N) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
