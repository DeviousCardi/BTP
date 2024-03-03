#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{   if (a>c)
	{   if (b+c=<a)
	    printf("Cannot form a triangle");
	    else if ((a*a)>(b*b)+(c*c))
	    printf("Obtuse Triangle");
	    else printf ("Not Obtuse Triangle"); } }
	if (b>a)
	{   if (b>c)
	{   if (a+c=<b)
	    printf("Cannot form a triangle");
	    else if ((b*b)>(a*a)+(c*c))
	    printf("Obtuse Triangle");
	    else printf ("Not Obtuse Triangle"); } }
	if (c>b)
	{   if (c>a)
	{   if (b+a=<c)
	    printf("Cannot form a triangle");
	    else if ((c*c)>(b*b)+(a*a))
	    printf("Obtuse Triangle");
	    else printf ("Not Obtuse Triangle"); } }
	return 0; }