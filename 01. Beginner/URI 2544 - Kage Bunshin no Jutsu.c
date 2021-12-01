#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    while(scanf("%d", &N) != EOF) {
        printf("%.0lf\n", log10(N) / log10(2));
    }
    return 0;
}