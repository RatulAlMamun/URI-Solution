#include <stdio.h>
int main()
{
    int N, M, i;
    char choose[10];
    scanf("%d %d", &N, &M);
    for(i = 0; i < M; i++) {
        scanf("%s", choose);
        if(0 == strcmp(choose, "fechou")) N++;
        if(0 == strcmp(choose, "clicou")) N--;
    }
    printf("%d\n", N);
    return 0;
}
