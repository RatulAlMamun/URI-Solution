#include <stdio.h>

int main()
{
    double A, B;
	char ch = '%';
    scanf("%lf %lf", &A, &B);
    printf("%.2lf%c\n", ((B - A) * 100.0) / A, ch);
    return 0;
}