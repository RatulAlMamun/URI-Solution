#include <stdio.h>
int main()
{
    int A, B, C, size;
    double Area;
    while(1) {
        scanf("%d", &A);
        if(A == 0) break;
        scanf("%d %d", &B, &C);
        Area = A * B * 100.0 / C;
        for(size = 1; size * size <= Area; size++);
        size--;
        printf("%d\n", size);
    }
    return 0;
}
