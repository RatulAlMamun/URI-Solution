#include <stdio.h>
int main(){
    char ch[100];
    double sal, tot_sal, sale;
    scanf("%s", ch);
    scanf("%lf%lf", &sal, &sale);
    tot_sal = sal + (sale * 0.15);
    printf("TOTAL = R$ %.2lf\n", tot_sal);
    return 0;
}