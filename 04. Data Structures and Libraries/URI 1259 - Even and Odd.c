#include<stdio.h>
#include<stdlib.h>

int ascending (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int descending (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main()
{
    int n, ev = 0, od = 0, num, i;
    scanf("%d", &n);
    int even[n], odd[n];
    while(n--) {
        scanf("%d", &num);
        if(num % 2) {
            odd[od] = num;
            od++;
        } else {
            even[ev] = num;
            ev++;
        }
    }
    qsort(even, ev, sizeof(int), ascending);
    qsort(odd, od, sizeof(int), descending);
    for(i = 0; i < ev; i++) {
        printf("%d\n", even[i]);
    }
    for(i = 0; i < od; i++) {
        printf("%d\n", odd[i]);
    }
    return 0;
}