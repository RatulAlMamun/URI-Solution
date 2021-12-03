#include <stdio.h>

int main() 
{
	int H, L;
	scanf("%d%d", &L, &H);
	printf("%.0f\n", ((H - L + 1) / 2.0) * (2 * L + (H - L + 1) - 1));
	return 0;
}