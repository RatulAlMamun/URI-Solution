#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.1lf %.1lf\n", n / log(n), (1.25506 * n) / log(n));
    return 0;
}
