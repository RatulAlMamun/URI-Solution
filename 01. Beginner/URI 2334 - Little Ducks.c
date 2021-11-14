#include <stdio.h>

int main()
{
    unsigned long long int P;
    while(1) {
        scanf("%llu", &P);
        if(P == -1) break;
        else if(P == 0) printf("0\n");
        else printf("%llu\n", P - 1);
    }
    return 0;
}
