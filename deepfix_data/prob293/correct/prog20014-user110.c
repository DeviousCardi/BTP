#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (b+c>a && c+a>b && a+b>c) { }
	else
	printf("Cannot form a triangle");
	if (a*a+b*b<c*c || b*b+c*c<a*a || a*a+c*c<b*b)
	printf("Obtuse Triangle");
	else
	printf("Not Obtuse Triangle");
	return 0; }