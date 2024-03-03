#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(c*c<(a*a+b*b))
	{    printf("Acute Triangle"); }
	else if(c*c>=(a*a+b*b)){printf("not acute triangle");}
	else if(a+b<c){printf("cannot form a triangle");}
	return 0; }