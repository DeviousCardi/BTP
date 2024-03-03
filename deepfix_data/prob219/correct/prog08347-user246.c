#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	{if(a>b>c || c>b>a)
	printf("%d",b);
	else if(b>c>a||a>c>b)
	printf("%d",c);
	else if(c>a>b||b>a>c)
	printf("%d",a);
	else
	printf("wrong input");}
	return 0; }