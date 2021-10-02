#include <stdio.h>
#include <math.h>
int main()
{
    int N1, N2, D1, D2, N, RN, RD, i, j;
    char hudai, op;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d %c %d %c %d %c %d", &N1, &hudai, &D1, &op, &N2, &hudai, &D2);
        if(op == '+') {
            RN = N1 * D2 + N2 * D1;
            RD = D1 * D2;
        } else if(op == '-') {
            RN = N1 * D2 - N2 * D1;
            RD = D1 * D2;
        } else if(op == '*') {
            RN = N1 * N2;
            RD = D1 * D2;
        } else if(op == '/') {
            RN = N1 * D2;
            RD = D1 * N2;
        }
        printf("%d/%d = ", RN, RD);
        if(abs(RN) > abs(RD)) {
            for(j = abs(RD); j > 1; j--) {
                if(RN % j == 0 && RD % j == 0) {
                    RN /= j;
                    RD /= j;
                }
            }
        } else {
            for(j = abs(RN); j > 1; j--) {
                if(RN % j == 0 && RD % j == 0) {
                    RN /= j;
                    RD /= j;
                }
            }
        }
        printf("%d/%d\n", RN, RD);
    }
    return 0;
}