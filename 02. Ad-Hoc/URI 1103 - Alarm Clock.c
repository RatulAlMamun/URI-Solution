#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, t, thi, thf;
    while(4 == scanf("%d %d %d %d", &h1, &m1, &h2, &m2)) {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        if(h1 == 0) thi = 24 * 60 + m1;
        else thi = h1 * 60 + m1;
        if(h2 == 0) thf = 24 * 60 + m2;
        else thf = h2 * 60 + m2;
        if(thf > thi) printf("%d\n", thf - thi);
        else printf("%d\n", 24 * 60 - (thi - thf));
    }
    return 0;
}
