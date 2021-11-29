#include<stdio.h>
#include<string.h>

int main()
{
    unsigned int long a, b;
    while(scanf("%u %u", &a, &b) == 2) {
        printf("%u\n", a ^ b);
    }
    return 0;
}
