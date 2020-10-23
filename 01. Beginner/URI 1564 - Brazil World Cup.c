#include <stdio.h>
int main()
{
    int N;
    while(1 == scanf("%d", &N)) {
        if(N == 0) {
            printf("vai ter copa!\n");
        } else if(N > 0) {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
