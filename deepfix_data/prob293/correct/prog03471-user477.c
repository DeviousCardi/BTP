#include <stdio.h>
#include <stdlib.h>
int main() {
	long int a,b,c;
	scanf("%ld%ld%ld",&a,&b,&c);
	if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
	{if(((a*a)+(b*b)<(c*c)) || ((a*a)+(c*c)<(b*b)) || ((c*c)+(b*b)<(a*a)))
	printf("Obtuse Triangle");
	else
	printf("Not Obtuse Triangle");}
	else
	printf("Cannot form a Triangle");
	return 0; }