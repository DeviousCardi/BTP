#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a+b)>(c)||(b+c)>(a)||(a+c)>(b)) {
if((a*a+b*b)>(c*c)||(b*b+c*c)>(a*a)||(a*a+c*c)>(b*b))
{printf("acute triangle");}
else
{printf("not acute triangle");} }
else
{printf("cannot form a triangle");}
	return 0; }