#include <stdio.h>
int main() {
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	int z=a+b+c;
	int y=a*b*c;
	scanf("%d",&z);
	float x=z/3;
	printf("%d",z);
	printf("%d",y);
	printf("%.3f",x);
	return 0; }