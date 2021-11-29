#include <stdio.h>
#include <string.h>

int main()
{
    char D, N[101];
    int i, flag, zero;
    while(2 == scanf(" %c %s", &D, N)) {
        flag = 0;
        zero = 0;
        if(D == '0' && N[0] == '0') break;
        for(i = 0; i < strlen(N); i++) {
            if(N[i] == D) continue;
            zero = (N[i] != '0') || zero;
            if (zero) {
                printf("%c", N[i]);
                flag = 1;
            }
        }
        if(flag == 0) printf("0");
        printf("\n");
    }
    return 0;
}
