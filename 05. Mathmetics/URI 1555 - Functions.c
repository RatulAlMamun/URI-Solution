#include<stdio.h>

int main()
{
    int n, x, y, Rafael, Beto, Carlos;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &x, &y);
        Rafael = (9 * x * x) + y * y;
        Beto = 2 * x * x + 25 * y * y;
        Carlos = -100 * x + y * y * y;
        if(Rafael > Beto && Rafael > Carlos) printf("Rafael ganhou\n");
        else if(Beto > Rafael && Beto > Carlos) printf("Beto ganhou\n");
        else printf("Carlos ganhou\n");
    }
    return 0;
}