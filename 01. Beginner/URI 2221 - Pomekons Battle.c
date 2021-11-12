#include <stdio.h>

int main() 
{
    int T, i, B, A, D, L, j;
    float V, Dabriel, Guarte;
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%d", &B);
        for(j = 0; j < 2; j++) {
            scanf("%d%d%d", &A, &D, &L);
            V = (A + D) / 2.0;
            if(L % 2 == 0) {
                V = V + B;
            }
            if(j == 0) Dabriel = V;
            if(j == 1) Guarte = V;
        }
        if(Dabriel > Guarte) printf("Dabriel\n");
        else if(Dabriel < Guarte) printf("Guarte\n");
        else printf("Empate\n");
    }
    return 0;
}
