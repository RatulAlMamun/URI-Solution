#include<stdio.h>

int main()
{
    int n, i, count;
    char cmd[1000];
    while(1) {
        count = 0;
        scanf("%d", &n);
        if(n == 0) break;
        scanf("%s", cmd);
        for(i = 0; i < n; i++) {
            if(cmd[i] == 'D') {
                count--;
            }
            if(cmd[i] == 'E') {
                count++;
            }
        }
        switch(count % 4) {
            case 0:
                printf("N\n");
                break;
            case 1:
            case -3:
                printf("O\n");
                break;
            case 2:
            case -2:
                printf("S\n");
                break;
            case -1:
            case 3:
                printf("L\n");
        }
    }
    return 0;
}