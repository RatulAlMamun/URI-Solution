#include <stdio.h>
int main()
{
    int x = 0, a, b, c, e, d = 0;
    for(a = 1; a <= 100; a++) {
        scanf("%d", &b);
        x++;
        if(b > d) {
            e = x;
            d = b;
        }
    }
    printf("%d\n", d);
    printf("%d\n", e);
    return 0;
}