#include <stdio.h>
#include <math.h>

int main()
{
    int N, M, i, j, x1, y1, x2, y2;
    while(scanf("%d", &N) != EOF) {
        scanf("%d", &M);
        int city[N][M];
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                scanf("%d", &city[i][j]);
                if(city[i][j] == 1) {
                    x1 = i;
                    y1 = j;
                }
                if(city[i][j] == 2) {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        printf("%d\n", abs(x2 - x1) + abs(y2 - y1));
    }
    return 0;
}
