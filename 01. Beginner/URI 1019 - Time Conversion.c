#include<stdio.h>
int main()
{
    long int N, h, m, s;
    scanf("%ld", &N);
    h = N / 3600;
    m = N % 3600 / 60;
    s = N % 60;
    printf("%ld:%ld:%ld\n", h, m, s);
	return 0;
}
