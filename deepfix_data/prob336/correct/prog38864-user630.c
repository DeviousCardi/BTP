#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
	  {if(c>a)
	    a=c; }
	else if(b>a) {
	     if(c>b)
	     a=c;
	   else
	     a=b; }
     if(b+c<=a)
	  printf("Cannot form a triangle");
	 else if(c*c+b*b<=a*a)
	  printf("Not acute triangle");
	 else if(c*c+b*b>a*a)
	  printf("Acute triangle");
	 return 0; }