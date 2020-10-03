#include <stdio.h>
int main()
{
    float X, Y = 0, flag = 0;
    while(1) {
        scanf("%f", &X);
        if(X < 0 || X > 10) {
            printf("nota invalida\n");
        } else if(flag == 0) {
            Y = X;
            flag = 1;
        } else {
            printf("media = %.2f\n", (X + Y) / 2);
            break;
        }
    }
    return 0;
}