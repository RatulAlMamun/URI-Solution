#include<stdio.h>
#include<string.h>

int main()
{
    int t, lenA, lenB, flag, i, j;
    char A[1000], B[1000];
    scanf("%d", &t);
    while(t--) {
        scanf("%s%s", A, B);
        lenA = strlen(A);
        lenB = strlen(B);
        flag = 0;
        for(i = lenB - 1, j = lenA - 1; i >= 0; i--) {
            if(B[i] == A[j]) {
                j--;
                flag = 0;
            } else {
                flag = 1;
                break;
            }
        }
        if(flag) {
            printf("nao encaixa\n");
        } else {
            printf("encaixa\n");
        }
    }
    return 0;
}