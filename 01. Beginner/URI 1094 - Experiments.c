#include <stdio.h>
int main()
{
    int N, i, Amount, total = 0, C = 0, R = 0, S = 0;
    char Type;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %c", &Amount, &Type);
        total += Amount;
        if(Type == 'C'){
            C += Amount;
        } else if(Type == 'R'){
            R += Amount;
        } else if(Type == 'S'){
            S += Amount;
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %\n", (C * 100.0) / total);
    printf("Percentual de ratos: %.2f %\n", (R * 100.0) / total);
    printf("Percentual de sapos: %.2f %\n", (S * 100.0) / total);
    return 0;
}
