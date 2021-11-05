#include <stdio.h>
int main()
{
    int N, i, L, two = 0, three = 0, four = 0, five = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &L);
        if(L % 2 == 0) two++;
        if(L % 3 == 0) three++;
        if(L % 4 == 0) four++;
        if(L % 5 == 0) five++;
    }
    printf("%d Multiplo(s) de 2\n", two);
    printf("%d Multiplo(s) de 3\n", three);
    printf("%d Multiplo(s) de 4\n", four);
    printf("%d Multiplo(s) de 5\n", five);
    return 0;
}
