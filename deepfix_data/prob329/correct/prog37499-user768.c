#include <stdio.h>
#include <stdlib.h>
int main() {
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if (c*c==(a*a)+(b*b))
  { printf("right Triangle"); }
 else
 { printf("Not Right Triangle"); }
 if (c>=a+b)
 { printf("cannot form a triangle"); }
	return 0; }