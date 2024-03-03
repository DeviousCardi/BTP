#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int a,b,c;
a=6;
b=8;
c=11;
if((a+b)>c &&(b+c)>a && (c+a)>b && (a*a)+(b*b)<(c*c))printf("Obtuse Triangle");
if((a+b)>c && (b+c)>a && (a+c)>b && (a*a)+(b*b)>=c)printf("Not Obtuse Triangle");
else printf("Cannot form Triangle");
	return 0; }