#include <stdio.h>
int table[15][15];
int powr(int i, int j)
{
    int res = 1, k;
    for(k = 1; k <= i + j; k++) {
        res *=2;
    }
    return res;
}
void Table()
{
    int i, j;
    for(i = 0; i < 15; i++) {
        for(j = 0; j < 15; j++) {
            table[i][j] = powr(i,j);
        }
    }
}
int countdigit(int n)
{
    int count = 0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int N, i, j, bigdigit, digit, k;
    Table();
    while(1 == scanf("%d", &N)) {
        if(N == 0) break;
        bigdigit = countdigit(table[N - 1][N - 1]);
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++) {
                digit = countdigit(table[i][j]);
                for(k = 1; k <= bigdigit - digit; k++) {
                    printf(" ");
                }
                printf("%d", table[i][j]);
                if(j < N - 1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
