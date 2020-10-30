#include <stdio.h>
int main()
{
    int QT, i;
    long int N, M;
    char p1[100], p2[100], c1[6], c2[6];
    scanf("%d", &QT);
    for(i = 0; i < QT; i++) {
        scanf("%s %s %s %s", p1, c1, p2, c2);
        scanf("%ld %ld", &N, &M);
        if((N % 2 == 0 && M % 2 == 0) || (N % 2 == 1 && M % 2 == 1)) {
            if(c1[0] == 'P') {
                printf("%s\n", p1);
            } else {
                printf("%s\n", p2);
            }
        } else {
            if(c1[0] == 'I') {
                printf("%s\n", p1);
            } else {
                printf("%s\n", p2);
            }
        }
    }
    return 0;
}
