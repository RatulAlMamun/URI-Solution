#include <stdio.h>

int cmpfunc (const void * a, const void * b) 
{
   return ( *(int*)b - *(int*)a );
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--) {
	    int i, m;
	    scanf("%d", &m);
	    int grade[m], sort[m];
	    for(i = 0; i < m; i++) {
	        scanf("%d", &grade[i]);
	        sort[i] = grade[i];
	    }
	    qsort(sort, m, sizeof(int), cmpfunc);
	    int count = 0;
	    for(i = 0; i < m; i++) {
	        if(sort[i] == grade[i]) count++;
	    }
	    printf("%d\n", count);
	}
	return 0;
}