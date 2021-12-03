#include<stdio.h>
#include<string.h>

int main()
{
    char str[100000];
    int i, flag, len;
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i <= len-5; i++) {
        if(str[i] == 'z' || str[i] == 'Z') {
            if(str[i + 1] == 'e' || str[i + 1] == 'E') {
                if(str[i + 2] == 'l' || str[i + 2] == 'L') {
                    if(str[i + 3] == 'd' || str[i + 3] == 'D') {
                        if(str[i + 4] == 'a' || str[i + 4] == 'A') {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        flag = 0;
    }
    if(flag == 1) {
        printf("Link Bolado\n");
    } else {
        printf("Link Tranquilo\n");
    }
    return 0;
}