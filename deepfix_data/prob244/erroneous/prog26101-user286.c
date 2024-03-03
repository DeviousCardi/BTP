#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	scanf("%d",&ti);
	if (ti<=200000)
	printf("%d",0);
	else if (ti>200001 && ti<=500000)
	tax=30000+(20/100)*(ti-500000);
	printf("%.2f",tax);
	else if (ti>500001 && ti<=1000000)
	tax=30000+(20/100)*(ti-500000);
	printf("%.2f",tax);
	else if(ti>1000000);
	tax=130000+(30/100)*(ti-1000000)
	printf("%.2f",tax);
	return 0; }