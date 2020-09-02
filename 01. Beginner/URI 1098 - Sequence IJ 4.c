#include <stdio.h>
int main()
{
    int i, j;
    for(i = 0; i <= 20; i += 2){
        for(j = 1; j <= 3; j++){
            if(i % 10 == 0){
                printf("I=%d J=%d\n", i / 10, i / 10 + j);
            } else {
                printf("I=%d.%d J=%d.%d\n", i / 10, i % 10, i / 10 + j, i % 10);
            }
        }
    }
    return 0;
}
