#include <stdio.h>
int main()
{
    int X, Z, i, sum = 0, count = 0;
    scanf("%d %d", &X, &Z);
    while(Z <= X) {
        scanf("%d", &Z);
    }
    for(i = 0; ; i++) {
        sum += i + X;
        if(sum > Z){
            break;
        } else {
            count++;
        }
    }
    printf("%d\n", count + 1);
    return 0;
}
