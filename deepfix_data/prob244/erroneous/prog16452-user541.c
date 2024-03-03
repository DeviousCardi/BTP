#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	scanf ("%f",&ti);
	if(ti<=200000)
	float a=0;
	printf("%.2f",a);
	else if((ti>=200001)&&(ti<=500000))
	float b=((10)*(ti-200000))/(100);
	printf("%.2f",b);
	else if((ti>=500001)&&(ti<=1000000))
	float c=(30000)+(((20)*(ti-500000))/(100));
	printf("%.2f",c);
	else
	float d=(130000)+(((30)*(ti-1000000))/(100));
	printf("%.2f",d);
	return 0; }