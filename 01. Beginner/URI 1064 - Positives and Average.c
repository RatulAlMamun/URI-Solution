#include <stdio.h>
int main()
{
    float N, i, sum = 0;
    int count = 0;
    for(i = 0; i < 6; i++){
        scanf("%f", &N);
        if(N > 0){
            count++;
            sum += N;
        }
    }
    printf("%d valores positivos\n%0.1f\n", count, sum / count);
    return 0;
}
