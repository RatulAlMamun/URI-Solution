#include <stdio.h>
int main()
{
    int N, i, pos = 0, neg = 0, even = 0, odd = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &N);
        if(N < 0){
            neg++;
        } else if(N > 0){
            pos++;
        }
        if(N % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, pos, neg);
    return 0;
}
