#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, sum, len;
    char V[101];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        sum = 0;
        scanf("%s", V);
        len = strlen(V);
        for(j = 0; j < len; j++) {
            switch(V[j]) {
                case '1':
                    sum += 2;
                    break;
                case '7':
                    sum += 3;
                    break;
                case '4':
                    sum += 4;
                    break;
                case '2':
                case '3':
                case '5':
                    sum += 5;
                    break;
                case '6':
                case '9':
                case '0':
                    sum += 6;
                    break;
                case '8':
                    sum += 7;
                    break;
                default:
                    sum += 0;
                    break;
            }
        }
        printf("%d leds\n", sum);
    }
    return 0;
}
