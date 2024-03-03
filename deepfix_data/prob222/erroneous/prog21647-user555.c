#include <stdio.h>
int main() {
	float a1,b1,c1,a2,b2,c2,A,B,C;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	A=a1*0.8+a2*0.6;
	B=b1*0.8+b2*0.6;
	C=c1*0.8+c2*0.6;
	if((a>c)&&(a<b))
	printf("%.2f",a);
	if((a>b)&&(a<c))
	printf("%.2f",a);
	if((b>a)&&(b<c))
	printf("%.2f",b);
	if((b>c)&&(b<a))
	printf("%.2f",b);
	if((c>b)&&(c<a))
	printf("%.2f",c);
	if((c>a)&&(c<b))
	printf("%.2f",c);
	return 0; }