#include<stdio.h>

int main()
{
    int i, n, x;
    int count[2001] = {0};
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        count[x]++;
    }
    for(i = 0; i < 2001; i++) {
        if(count[i]) printf("%d aparece %d vez(es)\n", i, count[i]);
    }
    return 0;
}