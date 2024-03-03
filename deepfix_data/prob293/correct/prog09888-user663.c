#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{   if (a>c)
	{   if (b+c<a)
	    printf("Cannot form a triangle");
	    else if ((a*a)>(b*b)+(c*c))
	    printf("Obtuse Triangle"); } }
	return 0; }