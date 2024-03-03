#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b>c)
	printf("%d",b);
	if(b>c>a)
	printf("%d",c);
	if(c>a>b)
	printf("%d",a)
	return 0; }