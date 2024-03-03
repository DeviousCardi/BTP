#include <stdio.h>
#include <stdlib.h>
int main() {int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>=(b+c)||b>=a+c||c>=a+b)
printf("Cannot form a Triangle");
else if((a*a==(b*b+c*c))||(b*b==(a*a+c*c))||(c*c==(a*a+b*b)))
printf("Right Triangle");
else
printf("Not Right triangle");
	return 0; }