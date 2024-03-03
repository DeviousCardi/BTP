#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b=0;
	scanf("%d",&a);
	for(;a!=0;a=a/10)
	b=b*10+a%10;printf("%d",b);
	if(b==a)
	printf("Yes");
	if(b!=a)else printf("No");
	return 0; }