#include<stdio.h>

int main()
{
    int connector1[5];
    int connector2[5];
    int i, flag = 0;
    for(i = 0; i < 5; i++) {
        scanf("%d", &connector1[i]);
    }
    for(i = 0; i < 5; i++) {
        scanf("%d", &connector2[i]);
    }
    for(i = 0; i < 5; i++) {
        if(connector1[i] ^ connector2[i]) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("Y\n");
    } else {
        printf("N\n");
    }
    return 0;
}