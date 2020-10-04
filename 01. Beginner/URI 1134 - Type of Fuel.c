#include <stdio.h>
int main()
{
    int a, b = 0, c = 0, d = 0;
    while(1) {
        scanf("%d", &a);
        if(a == 1) {
            b++;
        } else if(a == 2) {
            c++;
        } else if(a == 3) {
            d++;
        } else if(a == 4) {
            break;
        } else {
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", b);
    printf("Gasolina: %d\n", c);
    printf("Diesel: %d\n", d);
    return 0;
}
