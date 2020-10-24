#include<stdio.h>
int main()
{
    int N, i, j, s1, c, e1;
    while(1==scanf("%d", &N)) {
        c = N / 2 ;
        s1 = N / 3;
        e1 = N - s1;
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++) {
                if(c == j && c == i) {
                    printf("4");
                } else if (( i >= s1 && i < e1) && (j >= s1 && j < e1)) {
                    printf("1");
                } else if (i == j) {
                    printf("2");
                } else if (j == N - 1 - i) {
                    printf("3");
                } else if (i < s1 || i >= e1 || j < s1 || j >= e1) {
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
