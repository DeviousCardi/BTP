#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (((a*a+b*b)>(c*c))&&((a>=b&&a>=c)&&(b+c>a))||
	((b>=c&&b>=a)&&(a+c>b)))
	{printf("Acute Triangle");}
	else if((a>=b&&a>=c)&&(b+c>a))
	{printf("Not Acute Triangle");}
	else
	{printf("Cannot form a Triangle");}
	return 0; }