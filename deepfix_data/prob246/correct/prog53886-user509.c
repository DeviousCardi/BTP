#include <stdio.h>
int main() {
	int a=0,b=0,c=0;
	float d;
	d=(a+b+c)/3;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",a+b+c);
	printf("%d\n",a*b*c);
	printf("%.3f\n",d);
	return 0; }