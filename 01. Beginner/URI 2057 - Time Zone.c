#include <stdio.h>
int main()
{
    int S, T, F, local;
    scanf("%d %d %d", &S, &T, &F);
    local = S + T;
    if(local >= 24) {
        local = local - 24;
    }
    local = local + F;
    if(local < 0) {
        local = local + 24;
    }
    printf("%d\n", local);
    return 0;
}
