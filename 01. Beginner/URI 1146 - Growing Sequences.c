#include <stdio.h>
int main()
{
    int X, i;
    while(1) {
        scanf("%d", &X);
        if(X == 0) {
            break;
        }
        for(i = 1; i <= X; i++) {
            if(i == X) {
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
