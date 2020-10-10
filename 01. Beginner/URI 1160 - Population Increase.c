#include<stdio.h>
int main()
{
    long int T, i, PA, PB, temp, count, add1, add2;
    double G1, G2, tem;
    scanf("%ld", &T);
    for(i = 0; i < T; i++) {
        scanf("%ld %ld %lf %lf", &PA, &PB, &G1, &G2);
        count = 0;
        while(PA <= PB) {
            PA += PA * (G1 / 100);
            PB += PB * (G2 / 100);
            count++;
            if(count > 100) break;
        }
        if(count > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", count);
        }
    }
    return 0;
}
