#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int a,b,c,x;
a=6;
b=8;
c=11;
x=a+b;
if((a+b)>c && (a*a)+(b*b)<(c*c))printf("Obtuse Triangle");
else printf("cannot form triangle");
	return 0; }