#include <stdio.h>
int main() {
	int X, Y, M, dim_X, dim_Y;
	while(scanf("%d %d %d", &X, &Y, &M) != EOF) {
		while(M--) {
			scanf("%d %d", &dim_X, &dim_Y);
			if((dim_X <= X && dim_Y <= Y) || (dim_X <= Y && dim_Y <= X)) {
				printf("Sim\n");
			} else {
			    printf("Nao\n");
			}
		}
	}
	return 0;
}