#include<stdio.h>

int main()
{
    int n, ah, aa, bh, ba;
    char ch;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %c %d", &ah, &ch, &ba);
        scanf("%d %c %d", &bh, &ch, &aa);
        if (ah + aa > bh + ba) {
            printf("Time 1\n");
        } else if (bh + ba > aa + ah) {
            printf("Time 2\n");
        } else {
            if(aa > ba) {
                printf("Time 1\n");
            } else if(ba > aa) {
                printf("Time 2\n");
            } else {
                printf("Penaltis\n");
            }
        }
    }
    return 0;
}