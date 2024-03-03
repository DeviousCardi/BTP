#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf ("%d,%d,%d",&a,&b,&c);
	if (a*a + b*b < c*c  )
	printf("%d",obtuse triangle);
	else if ( a*a + b*b >= c*c );
	printf("%d",not obtuse triangle);
	else
	printf("%d",cannot form a triangle);
	return 0; }