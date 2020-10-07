#include <stdio.h>
int main()
{
    int N, i, f, l, sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        if(i == 1) {
            f = 0;
            printf("%d", f);
        } else if(i == 2) {
            l = 1;
            printf("%d", l);
        } else {
            sum = f + l;
            f = l;
            l = sum;
            printf("%d", sum);
        }
        if(i == N) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    return 0;
}
