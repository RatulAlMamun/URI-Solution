#include <stdio.h>

int main()
{
    char ch[30];
    int N, i, l;
    while(scanf("%s", ch) != EOF) {
        scanf("%d", &N);
        for(i = 0; i < N; i++) {
            scanf("%d", &l);
            printf("%c", ch[l - 1]);
        }
        printf("\n");
    }
    return 0;
}
