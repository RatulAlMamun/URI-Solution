#include <stdio.h>

int main()
{
    int N, D, i, j, count, d, flag;
    while(scanf("%d%d", &N, &D) != EOF) {
        getchar();
        int People[D][N];
        char date[D][20];
        for(i = 0; i < D; i++) {
            scanf("%s", date[i]);
            for(j = 0; j < N; j++) {
                scanf("%d", &People[i][j]);
            }
        }
        for(i = 0; i < D; i++) {
            count = 0;
            flag = 0;
            for(j = 0; j < N; j++) {
                if(People[i][j] == 1) count++;
            }
            if(count == N) {
                d = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1) printf("%s\n", date[d]);
        else printf("Pizza antes de FdI\n");
    }
    return 0;
}