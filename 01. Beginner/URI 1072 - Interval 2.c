#include<stdio.h>
int main()
{
    int N, X, in = 0, out = 0;
    scanf("%d", &N);
    while(N != 0){
        scanf("%d", &X);
        if(X <= 20 && X >= 10){
            in++;
        } else {
            out++;
        }
        N--;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}