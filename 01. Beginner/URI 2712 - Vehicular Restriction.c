#include<stdio.h>
#include<string.h>

int main()
{
    int n, count, i;
    char nameplate[100];
    scanf("%d", &n);
    while(n--) {
        count = 0;
        scanf("%s", nameplate);
        for(i = 0; i < strlen(nameplate); i++) {
            if(nameplate[i] <= 'Z' && nameplate[i] >='A' && (i < 3 || i > 7)) count++;
            if(nameplate[i] <= '9' && nameplate[i] >='0' && i > 3) count++;
        }
        if(nameplate[3] == '-') count++;
        if(count == 8) {
            switch(nameplate[7]) {
                case '1':
                case '2':
                    printf("MONDAY\n");
                    break;
                case '3':
                case '4':
                    printf("TUESDAY\n");
                    break;
                case '5':
                case '6':
                    printf("WEDNESDAY\n");
                    break;
                case '7':
                case '8':
                    printf("THURSDAY\n");
                    break;
                case '9':
                case '0':
                    printf("FRIDAY\n");
                    break;
            }
        } else {
            printf("FAILURE\n");
        }
    }
    return 0;
}