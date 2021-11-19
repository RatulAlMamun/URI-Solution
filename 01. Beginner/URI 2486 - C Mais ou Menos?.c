#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, N, total;
    char food[30];
    while(1) {
        scanf("%d", &T);
        if(T == 0) break;
        total = 0;
        for(i = 0; i < T; i++) {
            scanf("%d", &N);
            scanf("%[^\n]*c", food);
            if(0 == strcmp(food, " suco de laranja")) total += N * 120;
            else if(0 == strcmp(food, " morango fresco")) total += N * 85;
            else if(0 == strcmp(food, " mamao")) total += N * 85;
            else if(0 == strcmp(food, " goiaba vermelha")) total += N * 70;
            else if(0 == strcmp(food, " manga")) total += N * 56;
            else if(0 == strcmp(food, " laranja")) total += N * 50;
            else if(0 == strcmp(food, " brocolis")) total += N * 34;
        }
        if(total <= 130 && total >= 110) printf("%d mg\n", total);
        else if(total < 110) printf("Mais %d mg\n", 110 - total);
        else if(total > 130) printf("Menos %d mg\n", total - 130);
    }
    return 0;
}
