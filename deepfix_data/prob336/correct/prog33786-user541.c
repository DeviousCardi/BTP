#include <stdio.h>
#include <stdlib.h>
int main() {
	float a=10;
	float b=11;
	float c=12;
	scanf("%f%f%f",&a,&b,&c);
	if((a*a+b*b>c*c)||(a*a+c*c>b*b)||(b*b+c*c>a*a))
	printf("Acute Triangle");
	else if((a+b<c)||(a+c<b)||(b+c<a))
	printf("Cannot form a Triangle");
	else
	printf("Not Acute Triangle");
	return 0; }