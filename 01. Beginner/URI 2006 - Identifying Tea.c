#include <stdio.h>
int main()
{
    int T, A, B, C, D, E, count = 0;
    scanf("%d%d%d%d%d%d", &T, &A, &B, &C, &D, &E);
    if(T == A) {
        count++;
    }
    if(T == B) {
        count++;
    }
    if(T == C) {
        count++;
    }
    if(T == D) {
        count++;
    }
    if(T == E) {
        count++;
    }
    printf("%d\n",count);
    return 0;
}
