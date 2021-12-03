#include<stdio.h>

int main()
{
    int P, R;
    scanf("%d%d", &P, &R);
    if(!P) printf("C\n");
    else if(P && !R) printf("B\n");
    else if(P && R) printf("A\n");
    return 0;
}