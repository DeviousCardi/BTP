#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ( (a*a+b*b)==(c*c)){printf("right triangle");}
	else if((a*a+b*b)!=(c*c)){printf("not right triangle");}
	else if((a*a+b*b)<(c*c)){printf("cannot form a triangle");}
	return 0; }