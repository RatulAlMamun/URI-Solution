#include <stdio.h>
int main()
{
    int N, i, num;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &num);
        if(num == 0){
            printf("NULL\n");
        } else {
            if(num % 2 == 0){
                printf("EVEN ");
            } else {
                printf("ODD ");
            }
            if(num < 0){
                printf("NEGATIVE\n");
            } else {
                printf("POSITIVE\n");
            }
        }
    }
    return 0;
}