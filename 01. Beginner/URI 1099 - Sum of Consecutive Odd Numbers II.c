#include <stdio.h>
int main()
{
    int N, i, X, Y, temp, sum;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %d", &X, &Y);
        if(X > Y){
            temp = X;
            X = Y;
            Y = temp;
        }
        sum = 0;
        for(X = X + 1; X < Y; X++){
            if(X % 2 == 1){
                sum += X;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
