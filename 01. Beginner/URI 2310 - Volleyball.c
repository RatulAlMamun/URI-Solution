#include <stdio.h>

int main()
{
    int N, i, j, S, B, A, SS, SB, SA, TS = 0, TB = 0, TA = 0, TSS = 0, TSB = 0, TSA = 0;
    char name[100];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s", name);
        scanf("%d%d%d%d%d%d", &S, &B, &A, &SS, &SB, &SA);
        TS += S;
        TA += A;
        TB += B;
        TSS += SS;
        TSA += SA;
        TSB += SB;
    }
    printf("Pontos de Saque: %.2lf %%.\n", (double)TSS / TS * 100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (double)TSB / TB * 100);
    printf("Pontos de Ataque: %.2lf %%.\n", (double)TSA / TA * 100);
    return 0;
}
