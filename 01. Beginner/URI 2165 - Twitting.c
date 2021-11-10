#include <stdio.h>
#include <string.h>

int main()
{
    char T[510];
    scanf("%[^\n]*c", T);
    if(strlen(T) <= 140) {
        printf("TWEET\n");
    } else {
        printf("MUTE\n");
    }
    return 0;
}
