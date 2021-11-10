#include<stdio.h>
 
int main()
{
    double f = 0;
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
       f = 1.0 / (2.0 + f);
    }
    printf("%.10lf\n", 1.0 + f);
    return 0;
}
