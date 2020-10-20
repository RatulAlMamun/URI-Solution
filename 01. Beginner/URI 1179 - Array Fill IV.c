#include <stdio.h>
int main()
{
    int par[5], impar[5], i, num, j = 0, k = 0, l;
    for(i = 0; i < 15; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            par[j] = num;
            j++;
        } else {
            impar[k] = num;
            k++;
        }
        if(j == 5) {
            for(l = 0; l < 5; l++) {
                printf("par[%d] = %d\n", l, par[l]);
            }
            j = 0;
        }
        if(k == 5) {
            for(l = 0; l < 5; l++) {
                printf("impar[%d] = %d\n", l, impar[l]);
            }
            k = 0;
        }
    }
    for(i = 0; i < k; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(i = 0; i < j; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}