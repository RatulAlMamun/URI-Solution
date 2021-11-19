#include <stdio.h>
int main()
{
    int N, i, v, count;
    while(scanf("%d", &N) != EOF) {
        count = 0;
        for(i = 0; i < N; i++) {
            scanf("%d", &v);
            if(v == 1) count++;
        }
        if(count >= (N * 2) / 3.0) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }
    return 0;
}
