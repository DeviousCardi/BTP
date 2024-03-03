#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b<=c){printf("Cannot form a Triangle");}
	else
	if(c*c<(a*a+b*b))
	{    printf("Acute Triangle"); }
	else if(c*c>=(a*a+b*b)){printf("Not Acute Triangle");}
	return 0; }