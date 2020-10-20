#include <stdio.h>
int main()
{
    int N, small = 0, i;
    scanf("%d", &N);
    int X[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if(X[i] < small) {
            small = X[i];
        }
    }
    for(i = 0; i < N; i++) {
        if(X[i] == small) {
            printf("Menor valor: %d\n", small);
            printf("Posicao: %d\n", i);
            break;
        }
    }
    return 0;
}
