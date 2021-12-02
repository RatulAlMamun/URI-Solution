#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];
    int n, len1, len2, i;
    while(scanf("%d", &n) != EOF) {
        scanf("%s%s", str1, str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        for(i = 0; i < len1 || i < len2; i++) {
            if(i < len1) printf("%c", str1[i]);
            if(i < len2) printf("%c", str2[i]);
        }
        printf("\n");
    }
    return 0;
}