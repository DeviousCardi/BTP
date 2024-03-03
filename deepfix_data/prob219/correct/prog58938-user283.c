#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a<b)&&(a<c)&&(b<c))
	printf("%d",b);
	if((a>b)&&(a<c)&&(b<c))
	printf("%d",a);
	if((a<b)&&(a<c)&&(b>c))
	printf("%d",c);
	return 0; }