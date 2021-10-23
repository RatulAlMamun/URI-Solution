#include <stdio.h>
#include <math.h>

int main()
{
    int P, N, i, h, temp, flag = 0;
    scanf("%d %d", &P, &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &h);
        if(i == 0) {
            temp = h;
            continue;
        } else {
            if(P >= abs(temp - h)) {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
            temp = h;
        }
    }
    if(flag == 0) {
        printf("GAME OVER\n");
    } else {
        printf("YOU WIN\n");
    }
    return 0;
}
