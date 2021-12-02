#include <stdio.h>

int main()
{
    int N, Q, i, j, score[100], p, a;
    for(i = 0; i < N; i++) {
        score[i] = 0;
    }
    while(scanf("%d%d", &N, &Q) != EOF) {
        for(i = 0; i < N; i++) {
            scanf("%d", &score[i]);
        }
        for (i = 0; i < N; ++i) {
            for (j = i + 1; j <N; ++j) {
                if (score[i] < score[j]) {
                    a =  score[i];
                    score[i] = score[j];
                    score[j] = a;
                }
            }
        }
        for(i = 0; i < Q; i++) {
            scanf("%d", &p);
            printf("%d\n", score[p - 1]);
        }
    }
    return 0;
}