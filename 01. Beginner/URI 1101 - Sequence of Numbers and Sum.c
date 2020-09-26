#include <stdio.h>
int main()
{
    int M, N, temp, sum;
    while(1)
    {
        scanf("%d %d", &M, &N);
        if(M <= 0 || N <= 0)
            break;
        if(M > N)
        {
            temp = M;
            M = N;
            N = temp;
        }
        sum = 0;
        for( ; M<=N; M++)
        {
            printf("%d ",M);
            sum += M;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
