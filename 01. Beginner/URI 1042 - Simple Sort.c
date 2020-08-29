#include <stdio.h>
int main()
{
    int a, b, c, smallest, medium, largest, temp;
    scanf("%d%d%d", &a, &b, &c);
    smallest = a;
    medium = b;
    largest = c;
    if(smallest > medium){
        temp = smallest;
        smallest = medium;
        medium = temp;
    }
    if(largest < smallest){
        temp = largest;
        largest = smallest;
        smallest = temp;
    }
    if(medium > largest){
        temp = medium;
        medium = largest;
        largest = temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", smallest, medium, largest, a, b, c);
    return 0;
}
