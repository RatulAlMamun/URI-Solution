#include <stdio.h>

int main()
{
    int N, M, i, j;
    while(scanf("%d %d", &N, &M) != EOF) {
        int game[N][M];
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                scanf("%d", &game[i][j]);
            }
        }
        int flag = 0;
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                if(game[i][j] == 1) printf("9");
                else {
                    if(game[i + 1][j] == 1 && i + 1 < N) flag++;
                    if(game[i][j + 1] == 1 && j + 1 < M) flag++;
                    if(game[i - 1][j] == 1 && i - 1 >= 0) flag++;
                    if(game[i][j - 1] == 1 && j - 1 >= 0) flag++;
                    printf("%d", flag);
                    flag = 0;
                }
            }
            printf("\n");
        }
    }
    return 0;
}