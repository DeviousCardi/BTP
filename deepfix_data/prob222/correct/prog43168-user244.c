#include <stdio.h>
int main() {
	float a1,a2,b1,b2,c1,c2,a,b,c;
	scanf("%f",&a1);
	scanf("%f",&b1);
	scanf("%f",&c1);
	scanf("%f",&a2);
	scanf("%f",&b2);
	scanf("%f",&c2);
	a=a1*40/50+a2*60/100;
	b=b1*40/50+b2*60/100;
	c=c1*40/50+c2*60/100;
	if((a<=b&&a>=c)||(a<=c&&a>=b))
	printf("%.2f",a);
	else if((b<=a&&b>=c)||(b<=c&&b>=a))
	printf("%.2f",b);
	else if((c<=a&&c>=b)||(c<=b&&c>=a))
	printf("%.2",c);
	return 0; }