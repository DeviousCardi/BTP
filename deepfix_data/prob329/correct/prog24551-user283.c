#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
	printf("Not Right Triangle");
	else
	printf("Cannot form a Traingle");
	if(((a*a)>((b*b)+(c*c)))||((b*b)>((a*a)+(c*c)))||((c*c)>((b*b)+(a*a))))
	printf("Right Triangle");
	return 0; }