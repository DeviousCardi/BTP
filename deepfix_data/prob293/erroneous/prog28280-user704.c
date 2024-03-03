#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int a ;
	int b;
	int c;
	int d;
	scanf("%d %d %d",&a,&b,&c);
if (a >=b && a>=c)
	{if (a >=b+c)
	printf("Cannot form a Triangle");
	d=pow(b,2)+pow(c,2)-pow(a,2);
	else if (d>=0)
	printf("Not Obtuse Triangle");
	else
	printf("Obtuse Triangle"); }
else if (b >=a && b>=c)
    {if (b >=a+c)
	printf("Cannot form a Triangle");
	else
	d=pow(a,2)+pow(c,2)-pow(b,2);
	if (d>=0)
	printf("Not Obtuse Triangle");
	else
	printf("Obtuse Triangle");}
else if (c >=b && c>=a)
	{if (c >=b+a)
	printf("Cannot form a Triangle");
	else
	d=pow(b,2)+pow(a,2)-pow(c,2);
	 if (d>=0)
	printf("Not Obtuse Triangle");
	else
	printf("Obtuse Triangle");}
	return 0; }