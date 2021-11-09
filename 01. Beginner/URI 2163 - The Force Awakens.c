#include <stdio.h>

int main()
{
    int N, M, i, j, p = 0, q = 0;
    scanf("%d%d", &N, &M);
    int T[N][M];
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &T[i][j]);
        }
    }
    for(i = 1; i < N - 1; i++) {
        for(j = 1; j < M - 1; j++) {
            if(T[i][j] == 42) {
                if((T[i][j + 1] == 7) && (T[i][j - 1] == 7) && (T[i + 1][j] == 7) && (T[i - 1][j] == 7) && (T[i - 1][j - 1] == 7) && (T[i + 1][j + 1] == 7) && (T[i + 1][j - 1] == 7) && (T[i - 1][j + 1] == 7)) {
                    p = i + 1;
                    q = j + 1;
                    break;
                }
            }
        }
    }
    printf("%d %d\n", p, q);
    return 0;
}