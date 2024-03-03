#include <stdio.h>
int main() {
	int a1,a2,b1.b2.c1,c2,a,b,c;
	scanf("%d",&a1);
	scanf("%d",&b1);
	scanf("%d",&c1);
	scanf("%d",&a2);
	scanf("%d",&b2);
	scanf("%d",&c2);
	a=a1*40/50+a2*60/100;
	b=b1*40/50+b2*60/100;
	c=c1*40/50+c2*60/100;
	if((a<=b&&a>=c)||(a<=c&&a>=b))
	printf("%d",a);
	else if((b<=a&&b>=c)||(b<=c&&b>=a))
	printf("%d",b);
	else if((c<=a&&c>=b)||(c<=b&&c>=a))
	printf("%d",c);
	return 0; }