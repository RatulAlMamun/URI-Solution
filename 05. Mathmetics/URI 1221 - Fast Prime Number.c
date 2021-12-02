#include <stdio.h>
#include <math.h>

int isprime(int n)
{
    int i;
    if(n < 2) return 0;
    if(n == 2) return 1;
    for(i = 3; i <= sqrt(n); i++)
        if(!(n % i))
            return 0;
    return 1;
}

int main()
{
    int n, num;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);
        if(isprime(num)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
    return 0;
}