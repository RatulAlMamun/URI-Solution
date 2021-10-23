#include <stdio.h>

int main()
{
    long long int N, i, j = 0, count = 0, sum = 0;
    scanf("%lld", &N);
    long long int star[N], sheep[N];
    for(i = 0; i < N; i++) {
        scanf("%lld", &star[i]);
        sheep[i] = 0;
    }
    while(1) {
        if(j == 0 && star[0] % 2 == 0) {
            if(star[j] > 0){
                star[j]--;
            }
            sheep[j] = 1;
            break;
        } else if(j == N - 1 && star[N - 1] % 2 == 1) {
            if(star[j] > 0) {
                star[j]--;
            }
            sheep[j] = 1;
            break;
        } else if(star[j] % 2 == 1) {
            star[j]--;
            sheep[j] = 1;
            j++;
        } else if(star[j] % 2 == 0) {
            if(star[j] > 0) {
                star[j]--;
            }
            sheep[j] = 1;
            j--;
        }
    }
    for(i = 0; i < N; i++) {
        sum += star[i];
        count += sheep[i];
    }
    printf("%lld %lld\n", count, sum);
    return 0;
}
