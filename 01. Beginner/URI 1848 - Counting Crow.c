#include <stdio.h>
#include <string.h>
int main()
{
    int sum = 0, count = 0;
    char b[10];
    while(1) {
        gets(b);
        if(strcmp(b, "caw caw") == 0) {
            count++;
            if(count == 3) {
                printf("%d\n", sum);
                break;
            } else {
                printf("%d\n", sum);
            }
            sum = 0;
        } else {
            if(b[2] == '*') sum += 1;
            if(b[1] == '*') sum += 2;
            if(b[0] == '*') sum += 4;
        }
    }
    return 0;
}
