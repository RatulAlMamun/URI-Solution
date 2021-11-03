#include <stdio.h>
int main()
{
    double V, D, A, H;
    while(scanf("%lf %lf", &V, &D) != EOF) {
        A = 3.14 * (D / 2) * (D / 2);
        H = V / A;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", H, A);
    }
    return 0;
}
