#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,g,x,l,m;
	scanf("%d%d%d",&a,&b,&c);
	g=a+b+c;
	x=(a*a+b*b+c*c);
	if (a>b)
	l=a;
	else
	l=b;
	if (l>c)
	m=l;
	else
	m=c;
	if (g<=2*m)
	printf("Cannot form a Triangle");
	else {
	if (x<(2*c*c))
	printf ("Obtuse Triangle");
	else
	printf("Not Obtuse Triangle");
	return 0; }