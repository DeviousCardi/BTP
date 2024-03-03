#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float tax;
	printf("enter the value of ti");
	scanf("%d", ti);
	if(ti<200000)
	tax=0;
	if(ti>200001 && ti<=500000)
	tax=((1/10)*(ti-200000));
	if(ti>500001 && ti<=1000000)
	tax=(30000+((2/10)*(ti-500000)));
	if(ti>1000000)
	tax=(130000+(3/10*(ti-1000000)));
	printf("The value of tax is %f",&tax);
	return 0; }