#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf ("%d",&a);
	scanf ("%d",&b);
	scanf ("%d",&c);
	if (a+b<c||b+c<a||c+a<b)
	printf ("cannot form a triangle");
	else {
	        if (b*b==a*a+c*c||c*c==a*a+b*b||b*b==a*a+c*c)
	        printf ("right triangle");
	        else
	        printf ("not right triangle"); }
	return 0; }