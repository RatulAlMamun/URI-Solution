#include <stdio.h>

int main()
{
    int X;
    double M;
    while(1) {
        scanf("%d%lf", &X, &M);
        if(X == 0 && M == 0) break;
        printf("%.0lf\n", X * M);
    }
    return 0;
}
