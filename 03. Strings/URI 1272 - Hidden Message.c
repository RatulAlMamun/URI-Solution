#include<stdio.h>
#include<string.h>

int main()
{
    int t, lenstr, i, isword;
    char str[100];
    scanf("%d", &t);
    getchar();
    while(t--) {
        scanf("%[^\n]%*c", str);
        lenstr = strlen(str);
        isword = 0;
        for(i = 0; i < lenstr; i++) {
            if(str[i] >= 'a' && str[i] <= 'z' && isword == 0) {
                isword = 1;
                printf("%c", str[i]);
            }
            if(str[i] == ' ') {
                isword = 0;
            }
        }
        printf("\n");
    }
    return 0;
}