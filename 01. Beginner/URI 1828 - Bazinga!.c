#include<stdio.h>
#include<string.h>
int main()
{
    int T, i;
    char Raj[20], Sheldon[20];
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%s", Sheldon);
        scanf("%s", Raj);
        if(0 == strcmp(Raj, Sheldon)) {
            printf("Caso #%d: De novo!\n", i + 1);
            continue;
        }
        if(0 == strcmp(Sheldon, "tesoura")) {
            if(0 == strcmp(Raj, "Spock") || 0 == strcmp(Raj, "pedra")) {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            } else {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
        }
        if(0 == strcmp(Sheldon, "pedra")) {
            if(0 == strcmp(Raj, "Spock") || 0 == strcmp(Raj, "papel")) {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            } else {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
        }
        if(0 == strcmp(Sheldon, "papel")) {
            if(0 == strcmp(Raj, "lagarto") || 0 == strcmp(Raj, "tesoura")) {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            } else {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
        }
        if(0 == strcmp(Sheldon, "lagarto")) {
            if(0 == strcmp(Raj, "pedra") || 0 == strcmp(Raj, "tesoura")) {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            } else {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
        }
        if(0 == strcmp(Sheldon, "Spock")) {
            if(0 == strcmp(Raj, "lagarto") || 0 == strcmp(Raj, "papel")) {
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            } else {
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
        }
    }
    return 0;
}
