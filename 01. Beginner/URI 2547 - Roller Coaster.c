#include <stdio.h>

int main()
{
    int N, i, count, max, min, h;
    while(scanf("%d", &N) != EOF) {
        count = 0;
        scanf("%d %d", &min, &max);
        for(i = 0; i < N; i++) {
            scanf("%d", &h);
            if(h <= max && h >= min) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
