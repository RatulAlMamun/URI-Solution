#include<stdio.h>

int number_of_divisor(int n)
{
    int i, count = 0;
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, i, t, count;
    scanf("%d", &t);
    while(t--) {
        count = 0;
        scanf("%d", &n);
        for(i = 1; i <= n; i++) {
            if(!(number_of_divisor(i) % 2)) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}