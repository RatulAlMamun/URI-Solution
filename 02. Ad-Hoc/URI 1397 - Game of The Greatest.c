#include <stdio.h>

int main()
{
    int N, A, B, As, Bs;
    while(scanf("%d",&N) == 1) {
        if(N == 0) break;
        As = 0;
        Bs = 0;
        while(N--) {
            scanf("%d%d", &A, &B);
            if(A > B) As++;
            if(B > A) Bs++;
        }
        printf("%d %d\n", As, Bs);
    }
    return 0;
}