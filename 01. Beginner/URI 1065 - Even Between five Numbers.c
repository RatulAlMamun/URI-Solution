#include <stdio.h>
int main()
{
    int N, i, count = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &N);
        if(N % 2 == 0){
            count++;
        }
    }
    printf("%d valores pares\n", count);
	return 0;
}
