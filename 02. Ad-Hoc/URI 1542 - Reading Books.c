#include<stdio.h>

int main()
{
    int q, d, p, x;
    while(1) {
        scanf("%d", &q);
        if(q == 0) break;
        scanf("%d%d", &d, &p);
        x = (q * p * d) / (p - q);
        if(x <= 1) {
            printf("%d pagina\n", x);
        } else {
            printf("%d paginas\n", x);
        }
    }
    return 0;
}