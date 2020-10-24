#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        printf("Ho");
        if(i < N - 1) {
            printf(" ");
        } else {
            printf("!\n");
        }
    }
    return 0;
}
