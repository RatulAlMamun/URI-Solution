#include <stdio.h>

int gcd(int a, int b)
{
    if (b != 0) return gcd(b, a % b);
    else return a;
}

int main()
{
    int n, f1, f2;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &f1, &f2);
        printf("%d\n", gcd(f1, f2));
    }
    return 0;
}