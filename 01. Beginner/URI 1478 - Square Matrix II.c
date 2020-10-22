#include <stdio.h>
int main()
{
    int N, i, j, m = 0, flag = 0;
    while(1) {
        scanf("%d", &N);
        if(N == 0) break;
        for(i = 1; i <= N; i++) {
            for(j = 1; j <= N; j++) {
                if(i == j) {
                    m = 1;
                }
                if(i < j) {
                    m++;
                }
                if(j < i) {
                    if(flag == 0) {
                        m = i;
                        flag = 1;
                    } else {
                        m--;
                    }
                }
                printf("%3d", m);
                if(j < N) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
            flag = 0;
        }
        printf("\n");
    }
    return 0;
}
