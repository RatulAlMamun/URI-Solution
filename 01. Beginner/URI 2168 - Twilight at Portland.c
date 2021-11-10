#include<stdio.h>

int main()
{
    int N, i, j, count;
    scanf("%d", &N);
    int Block[N + 1][N + 1];
    for(i = 0; i < N + 1; i++) {
        for(j = 0; j < N + 1; j++) {
            scanf("%d", &Block[i][j]);
        }
    }
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            count = 0;
            if(Block[i][j] == 1) count++;
            if(Block[i + 1][j] == 1) count++;
            if(Block[i][j + 1] == 1) count++;
            if(Block[i + 1][j + 1] == 1) count++;
            if(count >= 2) {
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }
    return 0;
}
