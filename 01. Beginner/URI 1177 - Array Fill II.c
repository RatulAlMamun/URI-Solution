#include <stdio.h>
int main()
{
    int T, N[1000], i, j = 0;
    scanf("%d", &T);
    for(i = 0; i < 1000; i++) {
            N[i] = j;
            if(j < T - 1) j++;
            else j = 0;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
