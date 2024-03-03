#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, d=5;
	scanf("%d %d %d",&a,&b,&c);
	if ((a>=b)&&(a>=c))
	{ if (a<b+c)
	  if (a*a < b*b +c*c)
	    d=1;
	   else
	    d=0; }
	else if((b>c)&&(b>a))
	{ if (b<a+c)
	  if (b*b < a*a +c*c)
	   d=1;
	  else
	   d=0; }
	else
	{ if (c<a+b)
	  if (c*c < b*b +a*a)
	  d=1;
	  else
	   d=0; }
    switch (d)
    {case 1:printf("\nAcute Triangle");break;
     case 0:printf("\nNot Acute Triangle");break;
     default:printf("\nCannot form a Triangle"); }
	return 0; }