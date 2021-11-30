#include <stdio.h>

int main()
{
    int t, n, c, tn, tc;
    while(scanf("%d", &t) != EOF) {
        tn = 0;
        tc = 0;
        while(t--) {
            scanf("%d%d", &n, &c);
            tn += n * c;
            tc += c;
        }
        printf("%.4f\n", (float)tn / (tc * 100.0));
    }
    return 0;
}
