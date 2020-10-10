#include <stdio.h>
int main()
{
    int N, X, Y, i, sum;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        sum = 0;
        scanf("%d %d", &X, &Y);
        if(X % 2 == 0) {
            X++;
        }
        while(Y) {
            sum += X;
            X += 2;
            Y--;
        }
        printf("%d\n", sum);
    }
    return 0;
}
