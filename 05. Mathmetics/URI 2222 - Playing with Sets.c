#include <stdio.h>

int intersection(int a[], int b[])
{
    int count = 0, i;
    for(i = 1; i < 61; i++) {
        if(a[i] == b[i] && a[i] == 1) count++;
    }
    return count;
}

int uunion(int a[], int b[])
{
    int count = 0, i;
    for(i = 1; i < 61; i++) {
        if(a[i] == 1 || b[i] == 1) count++;
    }
    return count;
}

int main() 
{
    int N, i, M, j, X, k, Q, opt, set1, set2, q, temp;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &M);
        int set[M][61];
        for(j = 0; j < M; j++) {
            for(k = 0; k < 61; k++) {
                set[j][k] = 0;
            }
        }
        for(j = 0; j < M; j++) {
            scanf("%d", &set[j][0]);
            for(k = 1; k <= set[j][0]; k++) {
                scanf("%d", &temp);
                set[j][temp] = 1;
            }
        }
        scanf("%d", &Q);
        for(q = 0; q < Q; q++) {
            scanf("%d%d%d", &opt, &set1, &set2);
            if(opt == 1) {
                printf("%d\n", intersection(set[set1 - 1], set[set2 - 1]));
            } else {
                printf("%d\n", uunion(set[set1 - 1], set[set2 - 1]));
            }
        }
    }
    return 0;
}