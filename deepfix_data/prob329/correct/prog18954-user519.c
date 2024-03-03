#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d""%d""%d",&a,&b,&c);
	if((a!=0)&&(b!=0)&&(c!=0)) {
	    if((b*b)==((c*c)+(a*a)))
	printf("right triangle");
	else if (!((b*b)==((c*c)+(a*a))))
	printf("not a right triangle"); }
	else if((a+b)<c)
{	printf("cannot form a right triangle");}
	return 0; }