#include <stdio.h>
#include <stdlib.h>
int main() {int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>=b+c||b>=a+c||(c>=a+b)||(a<=b-c)||(b<=a-c)||(c<=a-b)||(a<=c-b)||(b<=c-a)||(c<=b-a))
printf("Cannot form triangle");
else
{if ((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b))
printf("Obtuse Triangle");
else
printf("Not Obtuse Triangle"); }
	return 0; }