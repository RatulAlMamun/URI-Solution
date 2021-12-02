#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, a, k, n, count, flag, p, c;
    while(scanf("%d",&n)) {
        if(n == 0) break;
        i = 1;
        j = 2;
        k = 2;
        c = 0;
        int mark[n + 1];
        for(a = 0; a < n + 1; a++)
            mark[a] = 0;
        printf("Discarded cards:");
        while(i <= n && c < n - 1) {
            printf(" %d", i);
            if(c == n - 2) printf("\n");
            else printf(",");
            c++;
            mark[i] = 1;
            i += j;
            if(i > n) {
                count = 0;
                flag = 0;
                for(p = i - j; p <= n; p++) {
                    if(mark[p] == 0) {
                        count++;
                    }
                }
                for(p = 1; p <= n; p++) {
                    if(count == 1 && mark[p] == 0) {
                        i = p;
                        break;
                    }
                    if(count == 0 && mark[p] == 0) flag++;
                    if(flag == 2 && mark[p] == 0) {
                        i = p;
                        break;
                    }
                }
                j = pow(2, k);
                k++;
            }
        }
        printf("Remaining card: ");
        for(i = 1; i <= n; i++) {
            if(mark[i] == 0) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}