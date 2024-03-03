#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a>=b)&&(a>=c))
	{if (b+c<=a) printf ("Cannot form a Triangle");
	else if (b*b+c*c>a*a) printf ("Acute Triangle");
	else printf ("Not Acute Triangle");}
	if (b>c&&b>a)
	{if (a+c<=b) printf ("Cannot form a Triangle");
	else if (a*a+c*c>b*b) printf ("Acute Triangle");
	else printf ("Not Acute Triangle");}
	if (c>b&&c>a)
	{if (a+b<=c) printf ("Cannot form a Triangle");
	else if (a*a+b*b>c*c) printf ("Acute Triangle");
	else printf ("Not Acute Triangle");}
	return 0; }