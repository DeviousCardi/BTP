#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)||(b+c>a)||(c+a>b))
	{if(c>a&&c>b)
	{if(c*c==a*a+b*b)
	printf("Right Triangle");}
	if(b>a&&b>c)
	{if(b*b==a*a+c*c)
	printf("Right Triangle");}
	if(a>c&&a>b)
	{if(a*a==c*c+b*b)
	printf("Right Triangle");}}
	else
	printf("Cannot form a triangle");
	return 0; }