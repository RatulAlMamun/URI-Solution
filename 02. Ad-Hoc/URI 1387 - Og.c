#include<stdio.h>

int main()
{
    int L, R;
    while(scanf("%d%d", &L, &R) == 2) {
        if(L == 0 && R == 0) break;
        printf("%d\n", L + R);
    }
    return 0;
}