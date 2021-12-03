#include <stdio.h>
#include <string.h>

int main()
{
    int N, L, i, len, l, value;
    scanf("%d", &N);
    while(N--) {
        value = 0;
        scanf("%d", &L);
        for(l = 0; l < L; l++) {
            char str[50];
            scanf("%s", str);
            len = strlen(str);
            for(i = 0; i < len; i++) {
                value += (str[i] - 65) + l + i;
            }
        }
        printf("%d\n", value);
    }
    return 0;
}