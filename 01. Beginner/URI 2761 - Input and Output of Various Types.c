#include <stdio.h>

int main () {
	int A;
	float B;
	char C;
	char D[50];
	scanf("%d %f %c %[^\n]", &A, &B, &C, D);
	printf("%d%f%c%s\n", A, B, C, D);
	printf("%d\t%f\t%c\t%s\n", A, B, C, D);
	printf("%10d%10f%10c%10s\n", A, B, C, D);
    return 0;
}