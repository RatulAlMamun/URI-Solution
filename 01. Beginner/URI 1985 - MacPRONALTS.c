#include <stdio.h>
int main()
{
    int p;
    double amount = 0.00;
    int code, q;
    scanf("%d", &p);
    while(p--) {
        scanf("%d %d", &code, &q);
        if(code == 1001)
            amount += (double) q * 1.50;
        else if(code == 1002)
                amount += (double) q * 2.50;
        else if(code == 1003)
                amount += (double) q * 3.50;
        else if(code == 1004)
                amount += (double) q * 4.50;
        else if(code == 1005)
                amount += (double) q * 5.50;
    }
    printf("%.2lf\n", amount);
    return 0;
}
