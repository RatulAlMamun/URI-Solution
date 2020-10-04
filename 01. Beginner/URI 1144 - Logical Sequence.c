#include <stdio.h>
int main()
{
    int N, i, j, c, s;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        c = i * i * i;
        s = i * i;
        printf("%d %d %d\n", i, s, c);
        printf("%d %d %d\n", i, s + 1, c + 1);
    }
    return 0;
}
