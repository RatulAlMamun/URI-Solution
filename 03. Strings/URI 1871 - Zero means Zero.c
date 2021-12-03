#include<stdio.h>
#include<string.h>

int main()
{
    int i, a, b, result;
    char snum[100];
    while(scanf("%d%d", &a, &b)) {
        if(!a && !b) break;
        result = a + b;
        sprintf(snum, "%d", result);
        for(i = 0; i < strlen(snum); i++) {
            if(snum[i] != '0') {
                printf("%c", snum[i]);
            }
        }
        printf("\n");
    }
    return 0;
}