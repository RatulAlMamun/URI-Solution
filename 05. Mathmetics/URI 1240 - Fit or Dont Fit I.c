#include <stdio.h>
#include <math.h>

int NumberOfDigit(int n)
{
    int d = 0;
    while(n) {
        n /= 10;
        d++;
    }
    return d;
}

int main()
{
    int T;
    long long int A, B, digit;
    scanf("%d", &T);
    while(T--) {
        scanf("%lld%lld", &A, &B);
        digit = NumberOfDigit(B);
        digit = pow(10, digit);
        if(A % digit == B) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }
    return 0;
}