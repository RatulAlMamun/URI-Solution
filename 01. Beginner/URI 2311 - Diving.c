#include <stdio.h>

int main()
{
    int N, i, j;
    float D, max, min, total, S;
    char name[100];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        total = 0;
        max = -1;
        min = 20;
        scanf("%s%f", name, &D);
        for(j = 0; j < 7; j++) {
            scanf("%f", &S);
            if(max < S) max = S;
            if(min > S) min = S;
            total += S;
        }
        printf("%s %.2f\n", name, (total - max - min) * D);
    }
    return 0;
}
