#include<stdio.h>
int main()
{
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    for(q = 999; ; q--) {
        r = a - (b * q);
        if(r >= 0 && r < abs(b)) {
            printf("%d %d\n", q, r);
            break;
        }
    }
    return 0;
}
