#include<stdio.h>

int main()
{
    int N, i, H, peak = 1, valley = 1, temp, result = 1;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &H);
        if(i == 0) {
            temp = H;
            continue;
        }
        if(temp < H && valley == 1) {
            peak = 1;
            valley = 0;
        } else if(temp > H && peak == 1) {
            peak = 0;
            valley = 1;
        } else {
            result = 0;
        }
        temp = H;
    }
    printf("%d\n", result);
    return 0;
}
