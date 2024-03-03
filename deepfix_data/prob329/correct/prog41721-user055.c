#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (((a*a==(b*b)+(c*c)) || (b*b==(c*c) + (a*a)) || (c*c==(b*b) + (a*a)))&& ( a<b+c && b<c+a && c<a+b))
	printf("Right Triangle");
	else if ( a<b+c && b<c+a && c<a+b)
	printf ("Not Right Triangle");
	else
	printf("Cannot form a Traingle");
	return 0; }