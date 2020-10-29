#include <stdio.h>
#include <string.h>
int main()
{
    int C, i, num;
    char str[20];
    scanf("%d", &C);
    for(i = 0; i < C; i++) {
        scanf("%s %d", str, &num);
        if(0 == strcmp(str,"Thor")) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
