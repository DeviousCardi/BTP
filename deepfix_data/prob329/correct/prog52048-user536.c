#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	  if((c>=a+b)||(b>=a+c)||(a>=b+c))
	  {printf("Cannot form a Triangle");}
	   else
	    if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
	    {printf("Right Triangle");}
	    else
	    {printf("Not Right Triangle");}
	return 0; }