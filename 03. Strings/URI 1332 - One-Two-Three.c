#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, one, two;
    char str[10];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", str);
        one = 0;
        two = 0;
        if(strlen(str) == 5) {
            printf("3\n");
        } else {
            if(str[0] == 'o') one++;
            if(str[1] == 'n') one++;
            if(str[2] == 'e') one++;
            if(str[0] == 't') two++;
            if(str[1] == 'w') two++;
            if(str[2] == 'o') two++;
        }
        if(one > 1) {
            printf("1\n");
        }
        if(two > 1) {
            printf("2\n");
        }
    }
    return 0;
}
