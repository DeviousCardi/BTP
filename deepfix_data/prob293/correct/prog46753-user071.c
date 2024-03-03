#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b))&&((a+b>c)&&(b+c>a)&&(c+a>b)))   {
	 printf("obtuse triangle");}
	 else if(((a*a+b*b>=c*c)||(b*b+c*c>=a*a)||(a*a+c*c>=b*b))&&((a+b>c)&&(b+c>a)&&(c+a>b))){
	  printf("not obtuse triangle");}
	  else  { printf("cannot form a triangle");}
	return 0; }