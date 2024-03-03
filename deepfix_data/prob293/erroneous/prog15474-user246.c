#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a+b*b<c*c)||(a*a+c*c<b*b)||(c*c+b*b<a*a))
	printf("Obtuse Triangle");
	else
	if((a+b>c)||(a+c>b)||(b+c>a))
	printf("Cannot form a Triangle");
	else
	printf("Not Obtuse Triangle")
	return 0; }