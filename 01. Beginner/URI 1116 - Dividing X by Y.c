#include <stdio.h>
int main()
{
    int N, X, Y;
    scanf("%d", &N);
    while(N)
    {
        scanf("%d %d", &X, &Y);
        if(Y == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n",(float)X/Y);
        }
        N--;
    }
    return 0;
}
