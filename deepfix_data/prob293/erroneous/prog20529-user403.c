#include <stdio.h>
#include <stdlib.h>
int main() {
	scanf("%d %d %d",&a,&b,&c);
	if ((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c=a*a+b*b))&&((a+b>c)||(a+c>b)||(b+c>a))
	{printf("obtuse triangle");}
	return 0; }