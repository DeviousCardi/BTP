#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	float b;
	float c;
	scanf("%f%f%f",&a,&b,&c);
	if((a*a+b*b)>(c*c))
	printf("Acute Triangle");
	else if((a+b<=c)||(a+c<=b)||(b+c<=a))
	printf("Cannot form a Triangle");
	else
	printf("Not Acute Triangle");
	return 0; }