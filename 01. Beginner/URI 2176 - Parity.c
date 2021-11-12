#include <stdio.h>
#include <string.h>

int main() 
{
    char S[200];
    int i, count = 0, length;
    scanf("%s", S);
    length = strlen(S);
    for(i = 0; i < length; i++) {
        if(S[i] == '1') count++;
    }
    if(count % 2 == 0) {
        S[length] = '0';
        S[length+1] = '\0';
    } else {
        S[length] = '1';
        S[length+1] = '\0';
    }
    printf("%s\n", S);
   return 0;
}
