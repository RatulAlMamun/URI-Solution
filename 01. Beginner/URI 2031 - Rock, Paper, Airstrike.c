#include <stdio.h>
#include <string.h>
int main()
{
    int i, N;
    char s1[10], s2[10];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s%s", s1, s2);
        if(0 == strcmp(s1, "pedra") && 0 == strcmp(s2, "pedra")) {
            printf("Sem ganhador\n");
        } else if(0 == strcmp(s1, "ataque") && 0 == strcmp(s2, "ataque")) {
            printf("Aniquilacao mutua\n");
        } else if(0 == strcmp(s1, "papel") && 0 == strcmp(s2, "papel")) {
            printf("Ambos venceram\n");
        } else if(0 == strcmp(s1, "papel") && 0 == strcmp(s2, "ataque")) {
            printf("Jogador 2 venceu\n");
        } else if(0 == strcmp(s1, "ataque") && 0 == strcmp(s2, "papel")) {
            printf("Jogador 1 venceu\n");
        } else if(0 == strcmp(s1, "papel") && 0 == strcmp(s2, "pedra")) {
            printf("Jogador 2 venceu\n");
        } else if(0 == strcmp(s1, "pedra") && 0 == strcmp(s2, "papel")) {
            printf("Jogador 1 venceu\n");
        } else if(0 == strcmp(s1, "pedra") && 0 == strcmp(s2, "ataque")) {
            printf("Jogador 2 venceu\n");
        } else if(0 == strcmp(s1, "ataque") && 0 == strcmp(s2, "pedra")) {
            printf("Jogador 1 venceu\n");
        }
    }
    return 0;
}
