#include<stdio.h>
#include<string.h>

int main()
{
    char str[500];
    scanf ("%[^\n]%*c", str);
    if(strlen(str) <= 80 && strlen(str) >= 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
