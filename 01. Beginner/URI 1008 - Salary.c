#include <stdio.h>
int main(){
    int n, s;
    float h;
    scanf("%d%d%f", &n, &s, &h);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, h * s);
    return 0;
}
