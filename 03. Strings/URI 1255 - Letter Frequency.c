#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, len, max;
	char str[200];
	scanf("%d", &n);
	getchar();
	while(n--) {
	    int alphabet[128] = {0};
	    max = -1;
	    scanf("%[^\n]%*c", str);
	    len = strlen(str);
	    for(i = 0; i < len; i++) {
	        if(str[i] >= 'A' && str[i] <= 'Z') {
	            alphabet[str[i] + 32]++;
	        }
	        alphabet[str[i]]++;
	    }
	    for(i = 97; i <= 122; i++) {
	        if(max < alphabet[i]) {
	            max = alphabet[i];
	        }
	    }
	    for(i = 97; i <= 122; i++) {
	        if(max == alphabet[i]) {
	            printf("%c", i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}