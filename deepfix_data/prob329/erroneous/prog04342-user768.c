#include <stdio.h>
#include <stdlib.h>
int main() {
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if((b*b==(a*a)+(c*c))||(c*c==(a*a)+(b*b))||(a*a==(b*b)+(c*c)&&(a||b||c!=0))
  { printf("right Triangle"); }
 else
 { printf("Not Right Triangle"); }
 if (b>=a+c)||(c>=a+b)||(a>=b+c)
 { printf("cannot form a triangle"); }
	return 0; }