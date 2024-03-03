#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,f;
	scanf ("%d%d%d",&d,&e,&f);
	if ((d>=e)&&(d>=f))
	   c=d;a=e;b=f;
	if ((e>=d)&&(e>=f))
	   c=e;a=d;b=f;
	if ((f>=d)&&(f>=e))
	   c=f;a=d;b=e;
	if (a+b<=c)
	   printf ("cannot form triangle");
	else {if (a*a+b*b>c*c)
	         printf ("obtuse triangle");
	      else printf ("not obtuse triangle");
	return 0; }