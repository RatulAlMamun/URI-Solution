#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int T, i, n, j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &n);
        int arr[n];
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        Sort(arr, n);
        printf("Case %d: %d\n", i, arr[n / 2]);
    }
    return 0;
}