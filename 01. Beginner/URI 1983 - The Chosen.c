#include <stdio.h>
int main()
{
    long int n, i, m, id;
    double note, store = 0;
    scanf("%ld", &n);
    for(i = 0; i < n; i++) {
        scanf("%ld %lf", &m, &note);
        if(store < note) {
            store = note;
            id = m;
        }
    }
    if(store >= 8) {
        printf("%ld\n", id);
    } else {
        printf("Minimum note not reached\n");
    }
    return 0;
}
