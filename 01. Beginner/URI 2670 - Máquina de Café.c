#include<stdio.h>

int main()
{
    int a, b, c, t1, t2, t3;
    scanf("%d%d%d", &a, &b, &c);
    t1 = b * 2 + c * 4;
    t2 = (a + c) * 2;
    t3 = a * 4 + b * 2;
    if(t1 <= t2 && t1 <= t3) printf("%d\n", t1);
    else if(t2 <= t1 && t2 <= t3) printf("%d\n", t2);
    else printf("%d\n", t3);
    return 0;
}