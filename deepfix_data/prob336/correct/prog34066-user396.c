#include <stdio.h>
#include <stdlib.h>
int main() {int a,b,c;
scanf("%d%d",&a,&b,&c);
if(a*a+b*b>c*c,b*b+c*c>a*a,a*a+c*c>b*b)
printf("ACUTE Triangle");
else
printf("Not Acute Triangle");
if(a+b<=c)
if(b+c<=a)
if(c+a<=b)
printf("Cannot form a triangle");
	return 0; }