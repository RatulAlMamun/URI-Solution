#include <stdio.h>
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) == 2) {
        if(a == b) {
            printf("%d\n", a);
        } else if(a < b) {
            printf("%d\n", b);
        } else {
            printf("%d\n", a);
        }
    }
    return 0;
}
