#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	scanf("%d",&a);
	float b;
	if(a<200000)
	b=0;
	else if(a<500000)
	b=0.1*(a-200000);
	else if(a<1000000)
	b=30000+0.2*(a-500000);
	else b=130000+0.3*(a-1000000);
	printf("%0.2f",b);
	return 0; }