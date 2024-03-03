#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tx;
	scanf("%d", &ti);
	if (ti <=200000) tx=0;
	else if (ti<=500000) tx = 0.1 * (ti -200000);
	else if (ti<=1000000) tx = 30000 + 0.2 * (ti-500000);
	else tx = 130000 + 0.3 * (ti-1000000);
	printf("%.2f", tx);
	return 0; }