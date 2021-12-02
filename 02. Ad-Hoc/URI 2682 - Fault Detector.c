#include<stdio.h>

int main()
{
    long long int n, temp = 0, flag = 0;
    while(scanf("%lld", &n) != EOF) {
        if(temp < n) {
           temp = n;
        } else {
            if(flag == 0) {
                printf("%lld\n", temp + 1);
                flag = 1;
            }
        }
    }
    if(flag == 0) printf("%lld\n", n + 1);
    return 0;
}