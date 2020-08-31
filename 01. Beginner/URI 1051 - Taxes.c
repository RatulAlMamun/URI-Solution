#include<stdio.h>
int main()
{
    float n, tax;
    scanf("%f", &n);
    if(n < 2000){
        printf("Isento\n");
    } else if(n < 3000) {
        n = n - 2000;
        printf("R$ %.2f\n", n * 0.08);
    } else if(n < 4500){
        n = n - 3000;
        printf("R$ %.2f\n", 80 + n * 0.18);
    } else {
        n = n - 4500;
        printf("R$ %.2f\n", 350 + n * 0.28);
    }
    return 0;
}
