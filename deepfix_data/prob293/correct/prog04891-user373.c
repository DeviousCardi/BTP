#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int a,b,c;
scanf ("%d %d %d",&a, &b, &c);
if((a+b)>c && (b+c)>a && (c+a)>b && (a*a)+(b*b)<(c*c)||(a*a)+(c*c)<(b*b) ||(b*b)+(c*c)<(a*a))printf("Obtuse Triangle");
if((a+b)>c && (b+c)>a && (a+c)>b && (a*a)+(b*b)>=c||(b*b)+(c*c)>=(a*a)||(a*a)+(c*c)>=(b*b))printf("Not Obtuse Triangle");
else printf("Cannot form a Triangle");
	return 0; }