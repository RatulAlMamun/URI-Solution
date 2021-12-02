#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, p, c;
    char ch[1000];
    scanf("%d", &n);
    while(n--) {
        p = 0;
        c = 0;
        scanf("%s", ch);
        for(i = 0; i < strlen(ch); i++) {
            if(ch[i] == '<') {
                p++;
            }else if(ch[i] == '>' && (p > 0)) {
                p--;
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
