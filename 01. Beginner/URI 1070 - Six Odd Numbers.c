#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if(n % 2 == 0){
        n++;
    }
    for(i = 0; i < 6; i++){
        printf("%d\n", n);
        n += 2;
    }
	return 0;
}
