#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a*a)+(b*b)<(c*c))
	printf("Obtuse Triangle");
	else
	if((a*a)+(b*b)<(c*c))
	printf("Not Obtuse Triangle");
	else
	if(((a+b)<=c)||((b+c)<=a)||((a+c)<=b))
	printf("Cannot form a triangle");
	return 0; }