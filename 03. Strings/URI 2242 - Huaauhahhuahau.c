#include<stdio.h>
#include<string.h>

int main()
{
    int i, j = 0, flag = 0;
    char str[100];
    char vowel[100];
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel[j] = str[i];
            j++;
        }
    }
    vowel[j] = '\0';
    j = 0;
    for(i = strlen(str) - 1; i >= 0; i--) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            if(str[i] == vowel[j]) {
                flag = 1;
                j++;
            } else {
                flag = 0;
                break;
            }
        }
    }
    if(flag) printf("S\n");
    else printf("N\n");
    return 0;
}