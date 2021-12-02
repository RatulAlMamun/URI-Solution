#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, count;
    while(scanf("%[^\n]%*c", str) != EOF) {
        count = 0;
        for(i = 0; i < strlen(str); i++) {
            if(str[i] != ' ') {
                count++;
                if(count % 2 == 1) {
                    if(str[i] >= 'a' && str[i] <= 'z') printf("%c", 'A' + str[i] - 'a');
                    else printf("%c", str[i]);
                } else {
                    if(str[i] >= 'A' && str[i] <='Z') printf("%c", 'a' + str[i] - 'A');
                    else printf("%c", str[i]);
                }
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}