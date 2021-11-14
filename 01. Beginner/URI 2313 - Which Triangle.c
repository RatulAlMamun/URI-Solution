#include <stdio.h>

int istriangle(int a, int b, int c)
{
    if(a + b > c && b + c > a && c + a > b) return 1;
    else return 0;
}

int isrightangle(int a, int b, int c)
{
    int A = a * a;
    int B = b * b;
    int C = c * c;
    if(A + B == C || B + C == A || C + A == B) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(0 == istriangle(A, B, C)) {
        printf("Invalido\n");
    } else {
        if(A == B && B == C && C == A) {
            printf("Valido-Equilatero\n");
        } else if(A == B || B == C || C == A) {
            printf("Valido-Isoceles\n");
        } else {
            printf("Valido-Escaleno\n");
        }
        printf("");
        if(1 == isrightangle(A, B, C)) {
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }
    }
    return 0;
}
