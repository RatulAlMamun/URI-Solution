#include <stdio.h>
int main()
{
    int a = 0, i = 0, sum = 0;
    while(a >= 0) {
        scanf("%d", &a);
        if(a < 0) continue;
        sum += a;
        i++;
    }
    printf("%.2f\n", (float)sum / (float)i);
    return 0;
}
