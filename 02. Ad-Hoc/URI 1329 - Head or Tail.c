#include <stdio.h>

int main()
{
    int N, R, John, Mary;
    while(scanf("%d", &N) == 1) {
        if(N == 0) break;
        John = 0;
        Mary = 0;
        while(N--) {
            scanf("%d", &R);
            if(R == 0) Mary++;
            else John++;
        }
        printf("Mary won %d times and John won %d times\n", Mary, John);
    }
    return 0;
}