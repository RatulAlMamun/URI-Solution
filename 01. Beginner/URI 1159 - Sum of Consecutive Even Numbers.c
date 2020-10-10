#include <stdio.h>
int main()
{
    int X, i, sum;
    while(1 == scanf("%d", &X)) {
        if(X == 0) {
            break;
        }
        if(X % 2) {
            X++;
        }
        sum = 0;
        for(i = 0; i < 5; i++) {
            sum += X;
            X += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
