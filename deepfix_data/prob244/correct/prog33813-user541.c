#include <stdio.h>
#include <stdlib.h>
int main() {
	float ti;
	float a=0;
	float b=((10)*(ti-200000))/100;
	float c=(30000)+(((20)*(ti-500000))/100);
	float d=(130000)+(((30)*(ti-1000000))/100);
	scanf ("%f",&ti);
	if(ti<=200000)
	printf("%.2f",a);
	else if((ti>=200001)&&(ti<=500000))
	printf("%.2f",b);
	else if((ti>=500001)&&(ti<=1000000))
	printf("%.2f",c);
	else
	printf("%.2f",d);
	return 0; }