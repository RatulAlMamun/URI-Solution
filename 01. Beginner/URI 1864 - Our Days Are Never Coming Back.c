#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    char s[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    for(i = 0; i < N; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
