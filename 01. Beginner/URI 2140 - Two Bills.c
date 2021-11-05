#include <stdio.h>

int main()
{
    int N, M, change, i, one, two, three, four, five, six, count;
    while(1) {
        scanf("%d%d", &N, &M);
        if(N == 0 && M == 0) break;
        change = M - N;
        one = 0; two = 0; three = 0; four = 0; five = 0; six = 0; count = 0;
        for(i = 0; i < 2; i++) {
            if(change >= 100 && one == 0) {
                change = change - 100;
                one = 1;
                count++;
            } else if(change >= 50 && two == 0) {
                change = change - 50;
                two = 1;
                count++;
            } else if(change >= 20 && three == 0) {
                change = change - 20;
                three = 1;
                count++;
            } else if(change >= 10 && four == 0) {
                change = change - 10;
                four = 1;
                count++;
            } else if(change >= 5 && five == 0) {
                change = change - 5;
                five = 1;
                count++;
            } else if(change >= 2 && six == 0) {
                change = change - 2;
                six = 1;
                count++;
            }
        }
        if(change == 0 && count==2) printf("possible\n");
        else printf("impossible\n");
    }
    return 0;
}