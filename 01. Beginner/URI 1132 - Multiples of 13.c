#include <stdio.h>
int main()
{
    int X, Y, sum = 0, temp;
    scanf("%d%d", &X, &Y);
    if(X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }
    for( ; X <= Y; X++) {
        if(X % 13 != 0) {
            sum += X;
        }
    }
    printf("%d\n", sum);
    return 0;
}
