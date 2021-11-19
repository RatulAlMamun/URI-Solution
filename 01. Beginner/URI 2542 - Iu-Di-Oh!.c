#include <stdio.h>

int main()
{
    int N, M, L, i, j, CM, CL, A;
    while(scanf("%d", &N) != EOF) {
        scanf("%d%d", &M, &L);
        int marco[M][N];
        int leonardo[L][N];
        for(i = 0; i < M; i++) {
            for(j = 0; j < N; j++) {
                scanf("%d", &marco[i][j]);
            }
        }
        for(i = 0; i < L; i++) {
            for(j = 0; j < N; j++) {
                scanf("%d", &leonardo[i][j]);
            }
        }
        scanf("%d%d%d", &CM, &CL, &A);
        if(marco[CM - 1][A - 1] < leonardo[CL - 1][A - 1]) {
            printf("Leonardo\n");
        } else if(marco[CM - 1][A - 1] == leonardo[CL - 1][A - 1]) {
            printf("Empate\n");
        } else {
            printf("Marcos\n");
        }
    }
    return 0;
}
