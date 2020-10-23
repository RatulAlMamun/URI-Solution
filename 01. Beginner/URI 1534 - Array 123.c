#include <stdio.h>
int main()
{
    int N, i, j, m;
    while(1 == scanf("%d", &N)) {
        for(i = 1; i <= N; i++) {
            for(j = 1; j <= N; j++) {
                if(i + j == N + 1) {
                    m = 2;
                } else if(i == j) {
                    m = 1;
                } else {
                    m = 3;
                }
                printf("%d", m);
            }
            printf("\n");
        }
    }
    return 0;
}
