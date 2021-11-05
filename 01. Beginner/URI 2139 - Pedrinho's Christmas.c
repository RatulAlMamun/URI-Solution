#include <stdio.h>

int main()
{
    int month, day, X;
    int dayCount[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
    while(scanf("%d%d", &month, &day) != EOF) {
        if(month == 12 && day == 24) printf("E vespera de natal!\n");
        else if(month == 12 && day == 25) printf("E natal!\n");
        else if(month == 12 && day > 25) printf("Ja passou!\n");
        else printf("Faltam %d dias para o natal!\n", 360 - (dayCount[month - 1] + day));
    }
    return 0;
}
