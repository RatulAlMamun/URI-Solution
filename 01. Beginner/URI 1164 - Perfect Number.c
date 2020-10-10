#include <stdio.h>
int main()
{
    int n, num, i, j, perfect;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        perfect = 0;
        for(j = 1; j < num; j++) {
            if(num % j == 0) {
                perfect += j;
                if(perfect > num) break;
            }
        }
        if(perfect == num)
            printf("%d eh perfeito\n",num);
        else
            printf("%d nao eh perfeito\n",num);
    }
    return 0;
}
