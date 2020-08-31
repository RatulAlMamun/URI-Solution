#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, N, N * i);
    }
	return 0;
}
