#include <stdio.h>
int main()
{
    int X, Y, temp;
    scanf("%d%d", &X, &Y);
    if(X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }
    for(X = X + 1; X < Y; X++) {
        if(X % 5 == 2 || X % 5 == 3){
            printf("%d\n", X);
        }
    }
    return 0;
}
