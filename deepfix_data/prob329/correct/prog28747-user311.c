#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf ("%d",&a);
	scanf ("%d",&b);
	scanf ("%d",&c);
	if (a+b<=c||b+c<=a||c+a<=b)
	printf ("Cannot form a Triangle");
	else {
	        if (b*b==a*a+c*c||c*c==a*a+b*b||a*a==b*b+c*c)
	        printf ("Right Triangle");
	        else
	        printf ("Not Right Triangle"); }
	return 0; }