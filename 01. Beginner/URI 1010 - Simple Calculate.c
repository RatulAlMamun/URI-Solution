#include <stdio.h>
int main(){
    int x = 2, code, product;
    float price, total = 0.0;
    while(x--)
    {
        scanf("%d%d%f", &code, &product, &price);
        total += (product * price);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
