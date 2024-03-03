#include <stdio.h>
int main() {
	float a,b,c;
	float x,y,z;
	float A,B,C;
	scanf("%f%f%f",&a,&b,&c);
	printf("%f%f%f",a,b,c);
	scanf("\n%f%f%f",&x,&y,&z);
	printf("\n%f%f%f",x,y,z);
	scanf("%f%f",&a,&x);
	A=a*40/50+x*60/100;
	scanf("%f%f",&b,&c);
	B=b*40/50+y*60/100;
	scanf("%f%f",&c,&z);
	C=c*40/50+z*60/100;
	printf("\nA\nB\nC");
	return 0; }