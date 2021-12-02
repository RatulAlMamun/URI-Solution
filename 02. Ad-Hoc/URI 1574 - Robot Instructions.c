#include<stdio.h>
#include<string.h>

int main()
{
    int t, n, x, i, index;
    char instruction[10];
    scanf("%d", &t);
    while(t--) {
        x = 0;
        scanf("%d ", &n);
        int num[n];
        for(i = 0; i < n; i++) {
            scanf("%s", instruction);
            if(0 == strcmp(instruction, "LEFT")) {
                x--;
                num[i] = -1;
            } else if(0 == strcmp(instruction, "RIGHT")) {
                x++;
                num[i] = 1;
            } else {
                scanf(" AS %d", &index);
                x += num[index - 1];
                num[i] = num[index - 1];
            }
        }
        printf("%d\n", x);
    }
    return 0;
}