#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)) {
	 if(a>=b&&a>=c)
	 {if(b*b+c*c<a*a)
	 printf("obtuse triangle");
	 else
	 printf("not obtuse triangle"); }
	 else
	 if(b>=a&&b>=c) {
	    if(a*a+c*c<b*b)
	 printf("obtuse triangle");
	 else
	 printf("not obtuse triangle"); }
	 else
	 if(c>=a&&c>=b) {
	    if(a*a+b*b<c*c)
	 printf("obtuse triangle");
	 else
	 printf("not obtuse triangle"); } }
	else
	printf("cannot form a triangle");
	return 0; }