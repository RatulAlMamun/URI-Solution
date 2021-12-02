#include <stdio.h>

int main()
{
    int n, c, i;
    char str[100];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", str);
        scanf("%d", &c);
        for(i = 0; i < strlen(str); i++) {
            if(str[i] - c >= 'A') {
                printf("%c", str[i] - c);
            } else {
                printf("%c", str[i] - c + 26);
            }
        }
        printf("\n");
    }
    return 0;
}