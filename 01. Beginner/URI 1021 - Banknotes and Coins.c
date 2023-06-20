#include <stdio.h>
int main()
{
    double N, E;
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u;
    scanf ("%lf", &N);
    a = (int)N / 100;
    b = (int)N % 100;
    c = b / 50;
    d = b % 50;
    e = d / 20;
    f = d % 20;
    g = f / 10;
    h = f % 10;
    i = h / 5;
    j = h % 5;
    k = j / 2;
    l = j % 2;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", c);
    printf("%d nota(s) de R$ 20.00\n", e);
    printf("%d nota(s) de R$ 10.00\n", g);
    printf("%d nota(s) de R$ 5.00\n", i);
    printf("%d nota(s) de R$ 2.00\nMOEDAS:\n", k);
    E = N * 100;
    m = (int)E % 100;
    n = m / 50;
    o = m % 50;
    p = o / 25;
    q = o % 25;
    r = q / 10;
    s = q % 10;
    t = s / 5;
    u = s % 5;
    printf("%d moeda(s) de R$ 1.00\n", l);
    printf("%d moeda(s) de R$ 0.50\n", n);
    printf("%d moeda(s) de R$ 0.25\n", p);
    printf("%d moeda(s) de R$ 0.10\n", r);
    printf("%d moeda(s) de R$ 0.05\n", t);
    printf("%d moeda(s) de R$ 0.01\n", u);
    return 0;
}
