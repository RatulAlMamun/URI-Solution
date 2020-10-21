#include <stdio.h>
int main()
{
    int l, i, j, count = 0;
    char t;
    double N[12][12];
    double soma = 0.0;
    scanf(" %c", &t);
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf",&N[i][j]);
            if(i+j < 11) {
                soma += N[i][j];
                count++;
            }
        }
    }
    if(t == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / count);
    return 0;
}
