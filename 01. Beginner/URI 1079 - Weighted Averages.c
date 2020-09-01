#include<stdio.h>
int main()
{
    int N, i;
    float a, b, c;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%f%f%f", &a, &b, &c);
        printf("%.1f\n", ((2 * a) + (3 * b) + (5 * c)) / 10);
    }
	return 0;
}
