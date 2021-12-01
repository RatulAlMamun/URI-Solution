#include <stdio.h>

int main()
{
    char name[100];
    int num, total = 0, count=0;
    FILE* fp;
    while(scanf("%[^\n]%*c", name) != EOF) {
        scanf("%d", &num);
        total += num;
        count++;
    }
    printf("%.1lf\n", (double)total / count);
    return 0;
}
