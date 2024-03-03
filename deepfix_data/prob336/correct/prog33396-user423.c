#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if
	((((a>=b)&&(a>=c))&&((b+c)>a))||
	(((b>=c)&&(b>=a))&&(a+c)>b)||
	(((c>=a)&&(c>=b))&&((b+a)>c)))
	{printf("triangle is");}
	else
	{printf("Cannot form a Triangle");}
	if
	(((a*a)+(b*b))>(c*c))
	{printf("Acute Triangle");}
	else if
	(((a*a)+(b*b))<(c*c))
	{printf("Not Acute Triangle");}
	return 0; }