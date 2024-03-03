#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;int b; int c;
	scanf("%d",&a,&b,&c);
	if((a*a+b*b)<(c*c))
	printf("Obtuse Triangle");
	if((((a*a)+b*b)>(c*c)) && (a+b)>c)
	printf("Not Obtuse Triangle");
	if((a+b)<c)
	printf("Cannot form a Triangle");
	return 0; }