#include <stdio.h>
int main() 
{
    int a[4], i, temp, k, ptr;
    for(i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }
    for(k = 1; k < 4; k++) {
        ptr = 0;
        while(ptr < 4 - k) {
            if(a[ptr] > a[ptr + 1]) {
                temp = a[ptr + 1];
                a[ptr + 1] = a[ptr];
                a[ptr] = temp;
            }
            ptr++;
        }
    }
    if((a[0] + a[1] > a[2]) || (a[1] + a[2] > a[3])){
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}
