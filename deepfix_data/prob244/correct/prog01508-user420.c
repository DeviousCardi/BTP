#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf("%d",&ti);
	if(ti<=200000)
	printf("0");
	else
	if(ti<=500000)
	printf("%f",(10.0/100)*(ti-200000));
	else
	if(ti<=1000000)
	printf("%f",30000+(20.0/100)*(ti-500000));
	else
	printf("%f",130000+(30.0/100)*(ti-1000000));
	return 0; }