#include <stdio.h>

int main()
{
    int N, I, i, j, k, count;
    while(scanf("%d%d", &N, &I) != EOF) {
        count = 0;
        for(k = 0; k < N; k++) {
            scanf("%d%d", &i, &j);
            if(i == I && j == 0) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}