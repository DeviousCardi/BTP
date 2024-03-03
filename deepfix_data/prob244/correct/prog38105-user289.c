#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	scanf("%f",&a);
	if(a<=200000)
	printf("0.00");
	else
	if(200001<=a<=500000)
	printf("%.2f",10.0/100.0*(a-200000));
	else
	if(500000<a<=1000000)
	printf("%.2f",30000+(20.0/100.0*(a-500000.0)));
	else
	if(a>=1000000)
	printf("%.2f",130000+30.0/100.0*(a-10000000.0));
	return 0; }