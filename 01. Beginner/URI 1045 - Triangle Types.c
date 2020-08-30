#include <stdio.h>
int main()
{
    double A, B, C, Cm, Bm, Am, temp;
    scanf("%lf%lf%lf", &A, &B, &C);
    Cm = C;
    Bm = B;
    Am = A;
    if(Cm > Bm){
        temp = Cm;
        Cm = Bm;
        Bm = temp;
    }
    if(Am < Cm){
        temp = Am;
        Am = Cm;
        Cm = temp;
    }
    if(Bm > Am){
        temp = Bm;
        Bm = Am;
        Am = temp;
    }
    if(Am >= Bm + Cm){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if((Am * Am) == (Bm * Bm) + (Cm * Cm)){
            printf("TRIANGULO RETANGULO\n");
        }
        if((Am * Am) > (Bm * Bm) + (Cm * Cm)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((Am * Am) < (Bm * Bm) + (Cm * Cm)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if((Am == Bm && Bm == Cm) || (Cm == Bm && Bm == Am) || (Am == Cm && Am == Bm)){
            printf("TRIANGULO EQUILATERO\n");
        }
        if((Am == Bm && Bm != Cm) || (Cm == Bm && Bm != Am) || (Am == Cm && Am != Bm)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
