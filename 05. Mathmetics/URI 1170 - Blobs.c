#include <stdio.h>
#include <math.h>

int main()
{
    int N, i;
    double X;
    scanf("%d", &N);
    while(N--) {
        scanf("%lf", &X);
        for(i = 0; X > pow(2, i); i++);
        printf("%d dias\n", i);
    }
    return 0;
}
