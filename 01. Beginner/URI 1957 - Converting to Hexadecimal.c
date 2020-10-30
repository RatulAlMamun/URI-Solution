#include <stdio.h>
#include <string.h>
int main()
{
    long long int V;
    char hexa[20];
    scanf("%lld", &V);
    long long int i = 0, rem, j, l;
    while(V > 0)
    {
        rem = V % 16;
        V /= 16;
        if(rem <= 9)
            hexa[i] = rem + 48;
        else if(rem == 10)
            hexa[i] = 'A';
        else if(rem == 11)
            hexa[i] = 'B';
        else if(rem == 12)
            hexa[i] = 'C';
        else if(rem == 13)
            hexa[i] = 'D';
        else if(rem == 14)
            hexa[i] = 'E';
        else if(rem == 15)
            hexa[i] = 'F';
        i++;
    }
    hexa[i] = '\0';
    l = strlen(hexa);
    for(j = l - 1; j >= 0; j--)
        printf("%c", hexa[j]);
    printf("\n");
    return 0;
}
