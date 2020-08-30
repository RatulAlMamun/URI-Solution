#include <stdio.h>
int main()
{
    int X, Y, i, sum = 0, temp;
    scanf("%d%d", &X, &Y);
    if(X > Y){
        temp = Y;
        Y = X;
        X = temp;
    }
    for(i = X + 1; i < Y; i++){
        if(i % 2 != 0 || i % -2 != 0){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
