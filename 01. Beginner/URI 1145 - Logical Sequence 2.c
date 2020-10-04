#include <stdio.h>
int main()
{
    int X, Y, temp, i, n = 1;
    scanf("%d %d", &X, &Y);
    for(i = 1; i <= Y; i++) {
        if(n % X == 0) {
            printf("%d\n", i);
            n++;
        } else {
            printf("%d ", n);
            n++;
        }
    }
    return 0;
}
