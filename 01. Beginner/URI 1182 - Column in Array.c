#include <stdio.h>
int main()
{
    int l, i, j;
    char t;
    double N[12][12];
    double soma = 0.0;
    scanf("%d", &l);
    scanf(" %c", &t);
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &N[i][j]);
            if(j == l) {
                soma += N[i][j];
            }
        }
    }
   if(t == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / 12.0);
    return 0;
}
