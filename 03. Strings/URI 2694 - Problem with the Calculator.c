#include<stdio.h>

int main()
{
    int n, i, num, sum;
    char str[14];
    scanf("%d", &n);
    while(n--) {
        sum = 0;
        num = 0;
        scanf("%s", str);
        for(i = 0; i < 14; i++) {
            if(str[i] >= '0' && str[i] <= '9') {
                num = num * 10 + (str[i] - '0');
            } else {
                sum += num;
                num = 0;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}