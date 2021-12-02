#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i, len;
    while(scanf("%[^\n]%*c", str) != EOF) {
        len = strlen(str);
        for(i = 0; i < len; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] += 13;
                if(str[i] >= 'a' && str[i] <= 'z') {
                    printf("%c", str[i]);
                } else {
                    printf("%c", str[i] - 26);
                }
            } else if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 13;
                if(str[i] >= 'A' && str[i] <= 'Z') {
                    printf("%c", str[i]);
                } else {
                    printf("%c", str[i] - 26);
                }
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}