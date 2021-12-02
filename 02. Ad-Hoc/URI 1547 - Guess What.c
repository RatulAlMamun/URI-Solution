#include<stdio.h>
#include<math.h>

int main()
{
    int n, t, s, g, i, diff, pos, min, flag;
    scanf("%d", &n);
    while(n--) {
        flag = 0;
        min = 100;
        scanf("%d%d", &t, &s);
        for(i = 1; i <= t; i++) {
            scanf("%d", &g);
            diff = abs(g - s);
            if(g == s && flag == 0) {
                pos = i;
                flag = 1;
            }
            if(diff < min && flag == 0) {
                pos = i;
                min = diff;
            }
        }
        printf("%d\n", pos);
    }
    return 0;
}
