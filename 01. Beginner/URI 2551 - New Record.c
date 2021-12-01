#include <stdio.h>

int main()
{
    int N, T = 0, D = 0, i, day;
    float temp, max;
    while(scanf("%d", &N) != EOF) {
        max = 0;
        for(i = 1; i<= N; i++) {
            scanf("%d %d", &T, &D);
            temp = (float)D / (float)T;
            if(max < temp) {
                printf("%d\n", i);
                max = temp;
            }
        }
    }
    return 0;
}