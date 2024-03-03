#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	{scanf("%d %d %d",&a,&b,&c);}
	if((a+b>c)&&(b+c>a)&&(c+a>b))
	    {if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
	             {printf("Obtuse Tringle");}
	     else    {printf("Not Obtuse Tringle");} }
	else   {printf("Cannot form a Tringle");}
	return 0; }