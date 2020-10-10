#include <stdio.h>
int main()
{
    float i, sum = 0, odd = 1, j = 1;
    for(i = 0; i < 20; i++) {
        sum += odd / j;
        odd += 2;
        j += j;
    }
    printf("%.2f\n", sum);
    return 0;
}
