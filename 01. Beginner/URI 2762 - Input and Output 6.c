#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int i, len, temp, flag = 0;
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        if(str[i] == '.') {
            break;
        }
    }
    for(i = i + 1; i < len; i++) {
        if(str[i] != '0') {
            flag = 1;
        }
        if(flag == 1) {
            printf("%c", str[i]);
        }
    }
    printf(".");
    for(i = 0; i < len; i++) {
        if(str[i] == '.') {
            break;
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}