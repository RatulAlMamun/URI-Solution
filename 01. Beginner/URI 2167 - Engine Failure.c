#include<stdio.h>

int main()
{
    int N, i, u = 0;
    scanf("%d", &N);
    int R[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &R[i]);
    }
    for(i = 1; i < N; i++) {
        if(R[i - 1] > R[i]) {
            u = i + 1;
            break;
        }
    }
    printf("%d\n", u);
    return 0;
}
