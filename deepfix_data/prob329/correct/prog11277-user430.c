#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a==0)||(b==0))
	printf("Cannot form a Triangle");
	else if(c==0)
	printf("Cannot form a Triangle");
	else if ((((a*a)+(b*b))==(c*c))||(((a*a)+(c*c))==(b*b)))
	printf("Right Triangle");
	else if (((c*c)+(b*b))==(a*a))
	printf("Right Triangle");
	else if(((a+b)<=c)||((a+c)<=b))
	printf("Cannot form a Triangle");
	else if(((b+c)<a))
	printf("Cannot form a Triangle");
	else
	printf("Not Right Triangle");
	return 0; }