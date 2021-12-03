#include<stdio.h>

int main()
{
    int q, n = 0, y = 0, vote;
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &vote);
        if(vote) n++;
        else y++;
    }
    if(y > n) printf("Y\n");
    else if(y == n) printf("N\n");
    else printf("N\n");
    return 0;
}