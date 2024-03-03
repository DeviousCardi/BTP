#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	if (!(a+b-c>0))
	printf("Cannot form a Triangle");
	else if (!(b+c-a>0))
	printf("Cannot form a Triangle");
	else if (!(c+a-b>0))
	printf("Cannot form a Triangle");
	else if (a*a+b*b-c*c<0)
	printf("Obtuse Triangle");
	else if(b*b+c*c-a*a<0)
	printf("Obtuse Triangle");
	else if(c*c+a*a-b*b<0)
	printf("Obtuse Triangle");
	else printf("Not Obtuse Triangle");
	return 0; }