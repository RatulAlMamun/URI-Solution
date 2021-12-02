#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int len, i, stack_top, underflow;
    while(scanf("%s", str) != EOF) {
        stack_top = 0;
        underflow = 0;
        len = strlen(str);
        for(i = 0; i < len; i++) {
            if(str[i] == '(') stack_top++;
            if(str[i] == ')') {
                stack_top--;
                if(stack_top < 0) {
                    underflow = 1;
                }
            }
        }
        if(stack_top == 0 && underflow == 0) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }
    return 0;
}