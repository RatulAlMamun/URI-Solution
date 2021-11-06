#include <stdio.h>
#include<string.h>
int main()
{
    int N, i;
    float T;
    char str[10000];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s", str);
        printf("%.2f\n", strlen(str) / 100.0);
    }
    return 0;
}
