#include <stdio.h>
int main()
{
    double a, b = 0;
    int X = 1, flag = 0;
    while(1) {
        if(X == 1) {
            scanf("%lf", &a);
            if(a < 0 || a > 10) {
                printf("nota invalida\n");
            } else if(flag == 0) {
                b = a;
                flag = 1;
            } else {
                printf("media = %.2lf\n", (a + b) / 2);
                printf("novo calculo (1-sim 2-nao)\n");
                b = 0;
                flag = 0;
                scanf("%d", &X);
            }
        } else if(X == 2) {
            break;
        } else {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &X);
        }
    }
    return 0;
}
