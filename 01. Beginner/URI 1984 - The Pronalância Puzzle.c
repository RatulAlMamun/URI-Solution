#include <stdio.h>
#include <string.h>
int main()
{
    char n[15];
    int i, len, temp;
    scanf("%s", n);
    len = strlen(n);
    for(i = 0; i < len / 2; i++) {
        temp = n[i];
        n[i] = n[len - 1 - i];
        n[len - 1 - i] = temp;
    }
    puts(n);
    return 0;
}
