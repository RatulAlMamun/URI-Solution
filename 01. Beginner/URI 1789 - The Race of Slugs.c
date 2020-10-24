#include <stdio.h>
int main()
{
    int i, L, V, Max;
    while(1 == scanf("%d", &L)) {
        Max = 0;
        for(i = 0; i < L; i++) {
            scanf("%d", &V);
            if(Max < V) {
                Max = V;
            }
        }
        if(Max < 10) {
            printf("1\n");
        } else if(Max < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    return 0;
}
