#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 == 0) printf("%d\n", num + 2);
    else printf("%d\n", num + 1);
    return 0;
}