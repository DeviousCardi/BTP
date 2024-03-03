#include <stdio.h>
#include <stdlib.h>
int main() {
int a;
int b;
int c;
scanf("%d,%d,%d",&a,&b,&c);
if ((a+b<=c)||(b+c<=a)||(a+c<=b))
{printf("Cannot form triangle");}
else if ((a*a + b*b>c*c) || (b*b+c*c>a*a) || (a*a+c*c>b*b))
{printf ("Acute triangle";}
else {printf ("Not Acute Triangle");}
	return 0; }