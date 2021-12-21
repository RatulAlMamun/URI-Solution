#include <stdio.h>
int main()
{
    int sh, sm, eh, em, hour, min;
    scanf("%d%d%d%d", &sh, &sm, &eh, &em);
    if(sh < eh) {
       hour = eh - sh;
    } else if(eh < sh) {
        hour = 24 - sh + eh;
    } else {
        hour = 24;
    }
    if(sm < em) {
       min = em - sm;
       if (sh == eh) {
           hour = 0;
       }
    } else if(em < sm) {
        min = 60 - sm + em;
        hour = hour - 1;
    } else {
        min = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);
    return 0;
}