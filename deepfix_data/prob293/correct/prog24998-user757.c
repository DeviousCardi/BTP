#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c, temp;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
	{ if(a>c)
	  { temp=a;
	    a=c;
	    c=temp; } }
	else
	{ if(b>c)
	    { temp=b;
	      b=c;
	      c=temp; } }
	if(c>a+b)
	 printf("Cannot form a Triangle");
	else
	{ if((c*c)>(a*a)+(b*b))
	   printf("Obtuse Triangle");
	  else
	   printf("Not Obtuse Triangle"); }
	return 0; }