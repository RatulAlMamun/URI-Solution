#include<stdio.h>
int main()
{
    int N, y, m, d;
    scanf("%d", &N);
    y = N / 365;
    m = N % 365 / 30;
    d = N % 365 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
	return 0;
}
