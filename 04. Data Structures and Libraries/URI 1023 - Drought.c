#include <stdio.h>
#include <math.h>

int main(){
    int N, i, X, Y, total_Y, total_X, cas = 1, flag = 0;
    double cpp;
    while(scanf("%d", &N) && N) {
        if(flag) printf("\n");
        flag = 1;
        total_X = 0;
        total_Y = 0;
        int arr[300] = {0};
        for(i = 1; i <= N; i++) {
            scanf("%d %d", &X, &Y);
            arr[(int)Y / X] += X;
            total_Y += Y;
            total_X += X;
        }
        cpp = (double)total_Y / (double)total_X * 100;
        printf("Cidade# %d:\n", cas);
        for(i = 0; i < 300; i++) {
            if(arr[i]>0) {
                printf("%d-%d ", arr[i], i);
            }
        }
        printf("\nConsumo medio: %.2lf m3.\n", (int)cpp / 100.0);
        cas++;
    }
    return 0;
}