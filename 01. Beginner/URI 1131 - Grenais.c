#include <stdio.h>
int main()
{
    int a, b, n, game = 0, inter = 0, gremio = 0, draw = 0;
    while(1) {
        scanf("%d %d", &a, &b);
        game++;
        if(a > b) {
            inter++;
        } else if(b > a) {
            gremio++;
        } else {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
        if(n == 1) {
            continue;
        } else if(n == 2) {
            break;
        } else {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &n);
        }
    }
    printf("%d grenais\n", game);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draw);
    if(inter > gremio) {
        printf("Inter venceu mais\n");
    } else if(gremio > inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
